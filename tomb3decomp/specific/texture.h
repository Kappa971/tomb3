#pragma once
#include "../global/vars.h"

#define DXTextureAdd	( (long(__cdecl*)(long, long, ushort*, DXTEXTURE*, long, long)) 0x004B23D0 )
#define DXFreeTPages	( (void(__cdecl*)()) 0x004B1F10 )
#define DXCreateMaxTPages	( (void(__cdecl*)(long)) 0x004B1D90 )
#define DXTextureSetGreyScale	( (void(__cdecl*)(bool)) 0x004B1B70 )
#define DXClearAllTextures	( (void(__cdecl*)(DXTEXTURE*)) 0x004B21F0 )
#define DXResetPalette	( (void(__cdecl*)(DXTEXTURE*)) 0x004B1FB0 )
#define DXTextureCleanup	( (void(__cdecl*)(long, DXTEXTURE*)) 0x004B2180 )
