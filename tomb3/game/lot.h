#pragma once
#include "../global/vars.h"

void inject_lot(bool replace);

void InitialiseLOTarray();
void InitialiseNonLotAI(short item_number, long slot);
long EnableNonLotAI(short item_number, long Always);
void DisableBaddieAI(short item_number);
void ClearLOT(LOT_INFO* lot);

#define EnableBaddieAI	( (long(__cdecl*)(short, long)) 0x00453000 )
