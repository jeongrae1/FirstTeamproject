#include "pch.h"
#include "CLife.h"
#include "CBattleUIMgr.h"

#define INITLIFE 5
CLife::CLife() : m_iLifeCount(INITLIFE)
{

}

CLife::~CLife()
{
	Release();
}

void CLife::Initialize()
{
}

void CLife::Update(int _iState)
{
	if (_iState == (int)BattleObjState::PLAYER_GET_LIFE)
	{
		Add_Life();
	}
	else if (_iState == (int)BattleObjState::PLAYER_DEAD)
	{
		Sub_Life();
	}
}

void CLife::Render(HDC hDC)
{
	TCHAR szLife[32] = L"";
	swprintf_s(szLife, L"Life:%d", m_iLifeCount);
	TextOut(hDC, (int)BattleUiPos::LIFE_X,
		(int)BattleUiPos::LIFE_Y, szLife, lstrlen(szLife));
}

void CLife::Release()
{

}

void CLife::Late_Update()
{
}

void CLife::Add_Life()
{
	++m_iLifeCount;
}

void CLife::Sub_Life()
{
	--m_iLifeCount;
}

