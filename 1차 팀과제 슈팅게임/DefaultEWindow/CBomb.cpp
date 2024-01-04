#include "CBomb.h"
#include "CBattleUIMgr.h"
#define INITBOMB  2
CBomb::CBomb() : m_iBombCount(INITBOMB)
{
}

CBomb::~CBomb()
{
	Release();
}

void CBomb::Initialize()
{
}

void CBomb::Update(int _iState)
{
	if (_iState==(int)BattleObjState::PLAYER_GET_BOMB)
	{
		Add_Bomb();
	}
	else if (_iState == (int)BattleObjState::PLAYER_USE_BOMB)
	{
		Sub_Bomb();
	}

}

void CBomb::Render(HDC hDC)
{
	TCHAR szBomb[32] = L"";
	swprintf_s(szBomb, L"Bomb:%d", m_iBombCount);
	TextOut(hDC, (int)BattleUiPos::BOMB_X, (int)BattleUiPos::BOMB_Y, szBomb, 
		lstrlen(szBomb));
}

void CBomb::Release()
{
}

void CBomb::Late_Update()
{
}

void CBomb::Add_Bomb()
{
	++m_iBombCount;
}

void CBomb::Sub_Bomb()
{
	--m_iBombCount;
}
