#pragma once
#include <Windows.h>


#define WINCX		700
#define WINCY		750

#define PURE		= 0


template<typename T>
void Safe_Delete(T& Temp)
{
	if (Temp)
	{
		delete Temp;
		Temp = nullptr;
	}
}

typedef struct tagInfo
{
	float	fX;
	float	fY;
	float	fCX;
	float	fCY;

}INFO;

enum class BattleObjState
{
	OBJ_NOEVENT = 0,
	PLAYER_GET_LIFE = 1,
	PLAYER_DEAD = 2,
	PLAYER_GET_BOMB= 3,
	PLAYER_USE_BOMB= 4,
	MONSTER_DEAD = 5,
	END
};

using namespace std;

extern HWND g_hWnd;