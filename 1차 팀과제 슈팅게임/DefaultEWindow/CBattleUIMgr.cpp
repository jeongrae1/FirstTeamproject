#include "CBattleUIMgr.h"

CBattleUIMgr::CBattleUIMgr()
{
}

CBattleUIMgr::~CBattleUIMgr()
{
	Release();
}

void CBattleUIMgr::Initialize()
{
	m_Score.Initialize();
	m_Life.Initialize();
	m_Bomb.Initialize();
}

void CBattleUIMgr::Update(int _iState)
{
	if (_iState == (int)BattleObjState::PLAYER_DEAD ||
		_iState == (int)BattleObjState::PLAYER_GET_LIFE)
	{
		m_Life.Update(_iState);
	}
	else if (_iState == (int)BattleObjState::PLAYER_GET_BOMB ||
		_iState == (int)BattleObjState::PLAYER_USE_BOMB)
	{
		m_Bomb.Update(_iState);
	}
	else if (_iState == (int)BattleObjState::MONSTER_DEAD)
	{
		m_Score.Update(_iState);
	}
}

void CBattleUIMgr::Render(HDC hDC)
{
	m_Score.Render(hDC);
	m_Life.Render(hDC);
	m_Bomb.Render(hDC);
}

void CBattleUIMgr::Release()
{

}

void CBattleUIMgr::Late_Update()
{
	m_Score.Late_Update();
	m_Life.Late_Update();
	m_Bomb.Late_Update();
}
