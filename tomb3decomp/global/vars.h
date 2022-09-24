#pragma once
#include "types.h"
#include "math_tbls.h"

#define VAR_(address, type)			(*(type*)(address))
#define ARRAY_(address, type, length)	(*(type(*)length)(address))

/*vars*/
#define lara_item	VAR_(0x006D62A4, ITEM_INFO*)
#define LaraOnPad	VAR_(0x006E2A14, uchar)
#define trigger_index	VAR_(0x006E29A8, short*)
#define lara	VAR_(0x006D61A0, LARA_INFO)
#define anims	VAR_(0x006E2074, ANIM_STRUCT*)
#define commands	VAR_(0x006E2208, short*)
#define changes	VAR_(0x006E287C, CHANGE_STRUCT*)
#define ranges	VAR_(0x006E2204, RANGE_STRUCT*)
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
#define assault_timer_active	VAR_(0x006261C0, long)
#define assault_target_penalties	VAR_(0x006D8760, long)
#define assault_penalties	VAR_(0x006261C4, long)
#define QuadbikeLapTime	VAR_(0x006261D0, long)
#define GlobalAlpha	VAR_(0x00625DF0, long)
#define bBlueEffect	VAR_(0x005BAB00, bool)
#define water_effect	VAR_(0x005D7AF8, long)
#define shade_effect	VAR_(0x005D7AFC, long)
#define wet	VAR_(0x006A1B60, long)
#define BarsWidth	VAR_(0x004C805C, long)
#define DumpX	VAR_(0x004CD8FC, short)
#define DumpY	VAR_(0x004CD8FE, short)
#define DumpWidth	VAR_(0x004CD900, short)
#define DumpHeight	VAR_(0x004CD902, short)
#define screen_sizer	VAR_(0x004C8040, double)
#define game_sizer	VAR_(0x004C8048, double)
#define GtFullScreenClearNeeded	VAR_(0x006A1B58, char)
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
#define Option_SFX_Volume	VAR_(0x004C70AC, short)
#define chunky_flag	VAR_(0x006E2A10, long)
#define first_hair	VAR_(0x00626310, long)
#define bones	VAR_(0x006E22E8, long*)
#define SmokeWindX	VAR_(0x006DB880, long)
#define SmokeWindZ	VAR_(0x006DB884, long)
#define outside	VAR_(0x006E1438, long)
#define CurrentRoom	VAR_(0x006E220C, long)
#define CurrentMesh	VAR_(0x006E2888, MESH_INFO*)
#define camera_underwater	VAR_(0x006E2894, long)
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
#define farz	VAR_(0x006CF250, long)
#define CarcassItem	VAR_(0x006E2FFC, short)
#define PirahnaHitWait	VAR_(0x006261D8, long)
#define level_items	VAR_(0x006266B4, long)
#define effects	VAR_(0x006D8750, FX_INFO*)
#define nPolyType	VAR_(0x00634008, long)
#define GammaOption	VAR_(0x004CD8F4, float)
#define level_complete	VAR_(0x00633F54, long)
#define FXType	VAR_(0x006E2FFA, short)
#define OnObject	VAR_(0x006E2960, long)
#define FootPrintNum	VAR_(0x006D79C0, long)
#define objbcnt	VAR_(0x006A1848, long)
#define GnGameMode	VAR_(0x00633F5C, long)
#define dpPrimitiveType	VAR_(0x00634114, D3DPRIMITIVETYPE)
#define BlackGouraudIndex	VAR_(0x004D38D4, long)
#define bFixSkyColour	VAR_(0x004D38DC, bool)
#define FinishLevelCheat	VAR_(0x006A1BD0, long)
#define dontFadePicture	VAR_(0x006A1B78, bool)
#define pictureFading	VAR_(0x006A1B7C, bool)
#define democount	VAR_(0x006E28C4, long)
#define demoptr	VAR_(0x006E28C0, ulong*)
#define next_item_active	VAR_(0x006D62AA, short)
#define next_fx_active	VAR_(0x006D8768, short)
#define KillEverythingFlag	VAR_(0x006261AC, long)
#define baddie_slots	VAR_(0x006D58B0, CREATURE_INFO*)
#define cdtrack	VAR_(0x004C51F8, short)
#define reset_flag	VAR_(0x00625F64, long)
#define noinput_count	VAR_(0x00625F60, long)
#define item_after_projectile	VAR_(0x006E2FF8, short)
#define SplashCount	VAR_(0x006261B4, long)
#define floor_data	VAR_(0x00633E24, short*)
#define tiltxoff	VAR_(0x006E2964, long)
#define tiltyoff	VAR_(0x006E2968, long)
#define nLoadedPictures	VAR_(0x006A1BAC, long)
#define T_numStrings	VAR_(0x006D0F00, short)
#define joy_fire	VAR_(0x0069FDF8, long)
#define joy_x	VAR_(0x0069FDFC, long)
#define joy_y	VAR_(0x0069FE00, long)
#define GtWindowClosed	VAR_(0x006CF268, bool)
#define splash_setup	VAR_(0x006DCA80, SPLASH_SETUP)
#define CurrentStartWake	VAR_(0x006266BC, uchar)
#define SubCurrentStartWake	VAR_(0x006270E4, uchar)
#define WakeShade	VAR_(0x006266C0, uchar)
#define SubWakeShade	VAR_(0x006270E4, uchar)
#define TribeBossShieldOn	VAR_(0x006D2260, char)
#define lizard_man_active	VAR_(0x006267D4, char)
#define CurrentAtmosphere	VAR_(0x006E2970, char)
#define number_rooms	VAR_(0x006E2880, short)
#define mesh_base	VAR_(0x00633E20, short*)
#define frames	VAR_(0x006E1430, short*)
#define number_cameras	VAR_(0x006267D0, long)
#define number_sound_effects	VAR_(0x006D8754, long)
#define sound_effects	VAR_(0x006D8764, OBJECT_VECTOR*)
#define number_boxes	VAR_(0x006E3190, long)
#define boxes	VAR_(0x006E318C, BOX_INFO*)
#define overlap	VAR_(0x006E3188, short*)
#define aranges	VAR_(0x006A1850, short*)
#define nTInfos	VAR_(0x00633F28, long)
#define cine	VAR_(0x006E300C, short*)
#define num_cine_frames	VAR_(0x006E300A, short)
#define cine_loaded	VAR_(0x006E3008, short)
#define demo_loaded	VAR_(0x00625F7C, long)
#define sound_active	VAR_(0x006D1F24, long)
#define num_sample_infos	VAR_(0x006D1F20, long)
#define sample_infos	VAR_(0x006D2224, SAMPLE_INFO*)
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
#define phd_scrwidth	VAR_(0x005BD3D8, long)
#define phd_scrheight	VAR_(0x00531700, long)
#define phd_WindowRect	VAR_(0x006A1838, RECT)
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
#define CurrentTLVertex	VAR_(0x00634004, D3DTLVERTEX*)
#define VertexBuffer	VAR_(0x00633FF8, D3DTLVERTEX*)
#define UnRollBuffer	VAR_(0x00633FF0, D3DTLVERTEX*)
#define bAlphaTesting	VAR_(0x00633FF4, bool)
#define sort3dptrbf	VAR_(0x005316E4, long*)
#define info3dptrbf	VAR_(0x004D7910, short*)
#define surfacenumbf	VAR_(0x0053171C, long)
#define sort3dptrfb	VAR_(0x005316EC, long*)
#define info3dptrfb	VAR_(0x004F6D40, short*)
#define surfacenumfb	VAR_(0x004F6D54, long)
#define f_a	VAR_(0x004D78F8, float)
#define f_b	VAR_(0x004D78FC, float)
#define f_boo	VAR_(0x005316F0, float)
#define f_oneoznear	VAR_(0x00531710, float)
#define nDrawnPoints	VAR_(0x00634000, long)
#define outsideBackgroundTop	VAR_(0x006E2898, float)
#define phd_viewdist	VAR_(0x005BAB04, long)
#define HWConfig	VAR_(0x006CED68, HWCONFIG)
#define CamPos	VAR_(0x006CF800, PHD_VECTOR)
#define CamRot	VAR_(0x006CF810, PHD_VECTOR)
/**/
/*debug stuff*/
#define bLaraOn	VAR_(0x004CDC88, long)
#define bRoomOn	VAR_(0x004CDC8C, long)
#define bObjectOn	VAR_(0x004CDC90, long)
#define bAObjectOn	VAR_(0x004CDC94, long)
#define bEffectOn	VAR_(0x004CDC98, long)
#define framedump	VAR_(0x006CF248, long)
/**/

/*arrays*/
#define objects	ARRAY_(0x006DCAC0, OBJECT_INFO, [376])
#define w2v_matrix	ARRAY_(0x005A6AC0, long, [indices_count])
#define matrix_stack	ARRAY_(0x005BAB58, long, [40 * indices_count])
#define ZTable	ARRAY_(0x006A2088, float, [40960])
#define UVTable	ARRAY_(0x005E5450, float, [65536])
#define ColorTable	ARRAY_(0x00634010, uchar, [256])
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
#define lead_info	ARRAY_(0x006D86E0, LEADER_INFO, [8])
#define fish	ARRAY_(0x006D7BE0, FISH_INFO, [200])
#define layout	ARRAY_(0x004CDCA0, short, [2][14])
#define conflict	ARRAY_(0x0069FCB0, long, [15])
#define keymap	ARRAY_(0x0069FCF0, uchar, [256])
#define sparks	ARRAY_(0x006D8880, SPARKS, [192])
#define Buckets	ARRAY_(0x005D7B00, TEXTUREBUCKET, [6])
#define TPages	ARRAY_(0x00633F70, DXTEXTURE*, [32])
#define depthq_table	ARRAY_(0x005BB2D8, char, [33][256])
#define gouraud_table	ARRAY_(0x004D38E8, char, [256][32])
#define water_palette	ARRAY_(0x006A1228, uchar, [768])
#define game_palette	ARRAY_(0x006A1858, uchar, [768])
#define exit_message	ARRAY_(0x006A1BD8, char, [128])
#define phdspriteinfo	ARRAY_(0x004D58F0, PHDSPRITESTRUCT, [512])
#define phdtextinfo	ARRAY_(0x005A6B00, PHDTEXTURESTRUCT, [4096])
#define G_GouraudPalette	ARRAY_(0x00625450, uchar, [1024])
#define sort3d_bufferbf	ARRAY_(0x004EB1B0, long, [12000])
#define info3d_bufferbf	ARRAY_(0x00531720, short, [12000])
#define sort3d_bufferfb	ARRAY_(0x004D7920, long, [12000])
#define info3d_bufferfb	ARRAY_(0x0056C0A8, short, [12000])
#define FootPrint	ARRAY_(0x006D79E0, FOOTPRINT, [32])
#define light_level	ARRAY_(0x006A1828, long, [4])
#define box_lines	ARRAY_(0x004C53F8, long, [12][2])
#define inv_colours	ARRAY_(0x006D71E0, short, [17])
#define static_objects	ARRAY_(0x006E2300, STATIC_INFO, [50])
#define IsJointUnderwater	ARRAY_(0x006D6290, char, [15])
#define GotJointPos	ARRAY_(0x006D6190, char, [15])
#define RColorTable	ARRAY_(0x00635748, long, [33][33][33])
#define GColorTable	ARRAY_(0x006598E0, long, [33][33][33])
#define BColorTable	ARRAY_(0x0067CB28, long, [33][33][33])
#define WaterTable	ARRAY_(0x00634148, WATERTAB, [22][64])
#define wibble_table	ARRAY_(0x005D7A60, float, [32])
#define electricity_points	ARRAY_(0x006E2080, short, [32][6])
#define lara_meshes	ARRAY_(0x004C52B0, uchar, [28])
#define lara_last_points	ARRAY_(0x004C52D0, uchar, [14])
#define lara_line_counts	ARRAY_(0x004C52E0, uchar, [6])
#define ExpRings	ARRAY_(0x006D5D20, EXPLOSION_RING, [6])
#define OldPicTexIndices	ARRAY_(0x006A1B80, long, [5])
#define CurPicTexIndices	ARRAY_(0x006A1B98, long, [5])
#define Inventory_ExtraData	ARRAY_(0x00626458, long, [8])
#define T_remapASCII	ARRAY_(0x004C7CE8, char, [95])
#define T_textSpacing	ARRAY_(0x004C7C78, char, [110])
#define T_textStrings	ARRAY_(0x006D0000, TEXTSTRING, [64])
#define T_theStrings	ARRAY_(0x006D0F20, char, [4096])
#define WakePts	ARRAY_(0x006E31A0, WAKE_PTS, [32][2])
#define SubWakePts	ARRAY_(0x006269E0, SUB_WAKE_PTS, [32][2])
#define TonyBossShield	ARRAY_(0x006CFD80, SHIELD_POINTS, [40])
#define PictureTextures	ARRAY_(0x006CE958, TEXTURESHIT, [32])
#define texture_page_ptrs	ARRAY_(0x005D79C8, char*, [32])
#define ground_zone	ARRAY_(0x006E3160, short*, [4][2])
#define fly_zone	ARRAY_(0x006E3180, short*, [2])
#define TexturesUVFlag	ARRAY_(0x00632C00, uchar, [4096])
#define sample_lut	ARRAY_(0x006D1F40, short, [370])
#define LastLoadedLevelPath	ARRAY_(0x00633E28, char, [256])

/*constants*/
#define NO_HEIGHT -32512
#define NO_ITEM	-1
#define W2V_SHIFT	14
#define MAX_TLVERTICES	0x2400
#define NO_ROOM	255
#define WALL_SHIFT	10
#define WALL_SIZE	(1 << WALL_SHIFT)
