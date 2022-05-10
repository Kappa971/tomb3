#pragma once
#include "types.h"

#define VAR_(address, type)			(*(type*)(address))
#define ARRAY_(address, type, length)	(*(type(*)length)(address))

/*vars*/
#define lara_item	VAR_(0x006D62A4, ITEM_INFO*)
#define LaraOnPad	VAR_(0x006E2A14, uchar)
#define trigger_index	VAR_(0x006E29A8, short*)
#define lara	VAR_(0x006D61A0, LARA_INFO)
#define anims	VAR_(0x006E2074, ANIM_STRUCT*)
#define input	VAR_(0x0069FDF0, long)
#define room	VAR_(0x006E2890, ROOM_INFO*)
#define camera	VAR_(0x006E3040, CAMERA_INFO)
#define height_type	VAR_(0x006E2A24, long)
#define DashTimer	VAR_(0x006D62A0, short)
#define wibble	VAR_(0x006261A8, long)
#define items	VAR_(0x006E2A1C, ITEM_INFO*)
#define gameflow	VAR_(0x006D77C0, GAMEFLOW_INFO)
#define cheat_hit_points	VAR_(0x006D6182, short)
#define savegame	VAR_(0x006D2280, SAVEGAME_INFO)
#define meshes	VAR_(0x006E1434, short**)
#define GF_NoFloor	VAR_(0x006261F0, short)
#define ExposureMeter	VAR_(0x006D6180, short)
#define mycoll	VAR_(0x004C7448, COLL_INFO*)
#define CurrentLevel	VAR_(0x00633F50, long)
#define assault_timer_display	VAR_(0x006261BC, long)
#define QuadbikeLapTimeDisplayTimer	VAR_(0x006261D4, long)
#define assault_penalty_display_timer	VAR_(0x006261C8, long)
#define assault_target_penalties	VAR_(0x006D8760, long)
#define assault_penalties	VAR_(0x006261C4, long)
#define QuadbikeLapTime	VAR_(0x006261D0, long)
#define GlobalAlpha	VAR_(0x00625DF0, long)
#define bBlueEffect	VAR_(0x005BAB00, bool)
#define BarsWidth	VAR_(0x004C805C, long)
#define DumpWidth	VAR_(0x004CD900, short)
#define health_bar_timer	VAR_(0x006266C8, long)
#define PoisonFlag	VAR_(0x006D77A0, char)
#define ammotext	VAR_(0x006263F8, TEXTSTRING*)
#define overlay_flag	VAR_(0x004C5834, long)
#define LpModeTS	VAR_(0x006263FC, TEXTSTRING*)
#define LnModeTSLife	VAR_(0x00626400, long)
#define last_target	VAR_(0x006E30D0, GAME_VECTOR)
#define ForcedFixedCamera	VAR_(0x006E30C0, GAME_VECTOR)
#define UseForcedFixedCamera	VAR_(0x006E30F0, char)
#define last_ideal	VAR_(0x006E30E0, GAME_VECTOR)
#define old_cam	VAR_(0x006E3100, OLD_CAMERA)
#define camerasnaps	VAR_(0x00625F3C, char)
#define static_lookcamp	VAR_(0x006E3150, GAME_VECTOR)
#define static_lookcamt	VAR_(0x006E3140, GAME_VECTOR)
#define old_target	VAR_(0x006E3128, PHD_VECTOR)
#define Option_Music_Volume	VAR_(0x004C70B0, short)
#define chunky_flag	VAR_(0x006E2A10, long)
#define first_hair	VAR_(0x00626310, long)
#define bones	VAR_(0x006E22E8, long*)
#define SmokeWindX	VAR_(0x006DB880, long)
#define SmokeWindZ	VAR_(0x006DB884, long)
#define outside	VAR_(0x006E1438, long)
#define bound_start	VAR_(0x00626188, long)
#define bound_end	VAR_(0x0062618C, long)
#define mid_sort	VAR_(0x004D38D0, long)
#define number_draw_rooms	VAR_(0x006E143C, long)
#define outside_left	VAR_(0x006E2878, long)
#define outside_right	VAR_(0x006E28A0, long)
#define outside_top	VAR_(0x006E28BC, long)
#define outside_bottom	VAR_(0x006E2200, long)
#define number_dynamics	VAR_(0x006E22EC, long)
#define smcr	VAR_(0x0069FE90, long)
#define smcg	VAR_(0x0069FE8C, long)
#define smcb	VAR_(0x0069FE88, long)
#define SmokeCountL	VAR_(0x006DB888, long)
#define SmokeCountR	VAR_(0x006DB88C, long)
#define SmokeWeapon	VAR_(0x006DCA60, long)
#define App	VAR_(0x006CED80, WINAPP)
#define distanceFogValue	VAR_(0x006CED7C, long)
/*renderer/phd/matrix stuff*/
#define phd_leftfloat	VAR_(0x004F6D30, float)
#define phd_topfloat	VAR_(0x004E34A8, float)
#define phd_rightfloat	VAR_(0x005D7A48, float)
#define phd_bottomfloat	VAR_(0x004D78F4, float)
#define phd_winxmin	VAR_(0x00531708, short)
#define phd_winxmax	VAR_(0x005316E0, short)
#define phd_winymin	VAR_(0x004F6D34, short)
#define phd_winymax	VAR_(0x00531714, short)
#define f_centerx	VAR_(0x005316F8, float)
#define f_centery	VAR_(0x005316FC, float)
#define phd_centerx	VAR_(0x004D7914, long)
#define phd_centery	VAR_(0x004D7918, long)
#define phd_mxptr	VAR_(0x005A6A2C, long*)
#define phd_zfar	VAR_(0x004F6D44, long)
#define phd_znear	VAR_(0x005316E8, long)
#define f_oneopersp	VAR_(0x004F6D48, float)
#define f_persp	VAR_(0x005A6AB8, float)
#define one	VAR_(0x004C5084, float)
#define phd_persp	VAR_(0x004F6D50, long)
#define phd_winwidth	VAR_(0x005A6AF4, long)
#define phd_winheight	VAR_(0x004D790C, long)
#define f_znear	VAR_(0x0056C0A0, float)
#define f_zfar	VAR_(0x005316F4, float)
#define f_perspoznear	VAR_(0x0053170C, float)
#define LfAspectCorrection	VAR_(0x004D38D8, float)
#define IMptr	VAR_(0x006E288C, long*)
#define IM_rate	VAR_(0x006E2884, long)
#define IM_frac	VAR_(0x006E2070, long)
#define phd_right	VAR_(0x005D7AE0, long)
#define phd_left	VAR_(0x004F6D58, long)
#define phd_bottom	VAR_(0x004F6D4C, long)
#define phd_top	VAR_(0x004D58E8, long)
#define m00	VAR_(0x006CA088, float)
#define m01	VAR_(0x006CA08C, float)
#define m02	VAR_(0x006CA090, float)
#define m03	VAR_(0x006CA094, float)
#define m10	VAR_(0x006CA098, float)
#define m11	VAR_(0x006CA09C, float)
#define m12	VAR_(0x006CA0A0, float)
#define m13	VAR_(0x006CA0A4, float)
#define m20	VAR_(0x006CA0A8, float)
#define m21	VAR_(0x006CA0AC, float)
#define m22	VAR_(0x006A2080, float)
#define m23	VAR_(0x006A2084, float)
/**/

/*arrays*/
#define objects	ARRAY_(0x006DCAC0, OBJECT_INFO, [376])
#define pickups	ARRAY_(0x006263F4, DISPLAYPU, [1])
#define w2v_matrix	ARRAY_(0x005A6AC0, long, [indices_count])
#define ZTable	ARRAY_(0x006A2088, float, [40960])
#define IMstack	ARRAY_(0x006E1440, long, [768])
#define interpolated_bounds	ARRAY_(0x006E28B0, short, [6])
#define bound_list	ARRAY_(0x00625F88, long, [128])
#define draw_rooms	ARRAY_(0x006E2220, short, [100])
#define dynamics	ARRAY_(0x006DB380, DYNAMIC, [64])
#define weapons	ARRAY_(0x004C7280, WEAPON_INFO, [11])	//put this in dll asap
#define vbuf	ARRAY_(0x005BD3E0, PHD_VBUF, [1500])
#define v_buffer	ARRAY_(0x00625850, VERTEX_INFO, [40])
#define LPos	ARRAY_(0x0069FE98, PHD_VECTOR, [3])
#define LightPos	ARRAY_(0x0069FE58, long, [12])
#define LightCol	ARRAY_(0x0069FE28, long, [12])

/*constants*/
#define NO_HEIGHT -32512
#define NO_ITEM	-1
#define W2V_SHIFT	14