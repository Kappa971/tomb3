#pragma once
#include "../global/vars.h"

void inject_savegame(bool replace);

void ModifyStartInfo(long level);
void InitialiseStartInfo();
void CreateStartInfo(long level);
void ResetSG();
void WriteSG(void* pointer, long size);
void ReadSG(void* pointer, long size);

#define CreateSaveGameInfo	( (void(__cdecl*)()) 0x00461DD0 )
#define ExtractSaveGameInfo	( (void(__cdecl*)()) 0x004623F0 )
