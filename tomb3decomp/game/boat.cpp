#include "../tomb3/pch.h"
#include "boat.h"
#include "../specific/init.h"
#include "../3dsystem/phd_math.h"
#include "collide.h"
#include "sphere.h"
#include "objects.h"
#include "items.h"
#include "control.h"
#include "../specific/specific.h"
#include "draw.h"
#include "../specific/draweffects.h"

void InitialiseBoat(short item_number)
{
	ITEM_INFO* item;
	BOAT_INFO* boat;

	item = &items[item_number];
	boat = (BOAT_INFO*)game_malloc(sizeof(BOAT_INFO), 0);
	item->data = boat;
	boat->boat_turn = 0;
	boat->right_fallspeed = 0;
	boat->left_fallspeed = 0;
	boat->tilt_angle = 0;
	boat->extra_rotation = 0;
	boat->water = 0;
	boat->pitch = 0;

	for (int i = 0; i < 32; i++)
	{
		WakePts[i][0].life = 0;
		WakePts[i][1].life = 0;
	}
}

static long BoatCheckGeton(short item_number, COLL_INFO* coll)
{
	ITEM_INFO* item;
	long dx, dz, pass;
	short ang;

	if (lara.gun_status != LG_ARMLESS)
		return 0;

	item = &items[item_number];
	dx = lara_item->pos.x_pos - item->pos.x_pos;
	dz = lara_item->pos.z_pos - item->pos.z_pos;

	if ((dz * phd_cos(-item->pos.y_rot) - dx * phd_sin(-item->pos.y_rot)) >> W2V_SHIFT > 512)
		return 0;

	pass = 0;
	ang = item->pos.y_rot - lara_item->pos.y_rot;

	if (lara.water_status == LARA_SURFACE || lara.water_status == LARA_WADE)
	{
		if (!(input & IN_ACTION) || lara_item->gravity_status || item->speed)
			return 0;

		if (ang > 0x2000 && ang < 0x6000)
			pass = 1;
		else if (ang > -0x6000 && ang < -0x2000)
			pass = 2;
	}
	else if (lara.water_status == LARA_ABOVEWATER)
	{
		if (lara_item->fallspeed > 0)
		{
			if (lara_item->pos.y_pos + 512 > item->pos.y_pos)
				pass = 3;
		}
		else if (!lara_item->fallspeed)
		{
			if (ang > -0x6000 && ang < 0x6000)
			{
				if (lara_item->pos.x_pos == item->pos.x_pos &&
					lara_item->pos.y_pos == item->pos.y_pos &&
					lara_item->pos.z_pos == item->pos.z_pos)
					pass = 4;
				else
					pass = 3;
			}
		}
	}

	if (pass)
	{
		if (!TestBoundsCollide(item, lara_item, coll->radius))
			return 0;

		if (!TestCollision(item, lara_item))
			return 0;
	}

	return pass;
}

void BoatCollision(short item_number, ITEM_INFO* l, COLL_INFO* coll)
{
	ITEM_INFO* item;
	long geton;

	if (l->hit_points < 0 || lara.skidoo != NO_ITEM)
		return;

	geton = BoatCheckGeton(item_number, coll);

	if (!geton)
	{
		coll->enable_baddie_push = 1;
		ObjectCollision(item_number, l, coll);
		return;
	}

	lara.skidoo = item_number;

	if (geton == 1)
		l->anim_number = objects[VEHICLE_ANIM].anim_index + 8;
	else if (geton == 2)
		l->anim_number = objects[VEHICLE_ANIM].anim_index;
	else if (geton == 3)
		l->anim_number = objects[VEHICLE_ANIM].anim_index + 6;
	else
		l->anim_number = objects[VEHICLE_ANIM].anim_index + 1;

	lara.water_status = LARA_ABOVEWATER;
	item = &items[item_number];
	l->pos.x_pos = item->pos.x_pos;
	l->pos.y_pos = item->pos.y_pos - 5;
	l->pos.z_pos = item->pos.z_pos;
	l->pos.x_rot = 0;
	l->pos.y_rot = item->pos.y_rot;
	l->pos.z_rot = 0;
	l->gravity_status = 0;
	l->speed = 0;
	l->fallspeed = 0;
	l->frame_number = anims[l->anim_number].frame_base;
	l->current_anim_state = 0;
	l->goal_anim_state = 0;

	if (l->room_number != item->room_number)
		ItemNewRoom(lara.item_number, item->room_number);

	AnimateItem(l);

	if (item->status != ITEM_ACTIVE)
	{
		AddActiveItem(item_number);
		item->status = ITEM_ACTIVE;
	}

	S_CDPlay(12, 0);
}

void DrawBoat(ITEM_INFO* item)
{
	BOAT_INFO* boat;

	boat = (BOAT_INFO*)item->data;
	item->data = &boat->prop_rot;
	DrawAnimatingItem(item);
	item->data = boat;
	S_DrawWakeFX(item);
}

void inject_boat(bool replace)
{
	INJECT(0x00411FE0, InitialiseBoat, replace);
	INJECT(0x00412040, BoatCheckGeton, replace);
	INJECT(0x004121B0, BoatCollision, replace);
	INJECT(0x00413CF0, DrawBoat, replace);
}
