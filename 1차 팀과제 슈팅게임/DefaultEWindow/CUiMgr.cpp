#include "pch.h"
#include "CUiMgr.h"

CUiMgr::CUiMgr()
{
}

CUiMgr::~CUiMgr()
{
	Release();
}

void CUiMgr::Initialize()
{
	m_BattleMgr.Initialize();
}

void CUiMgr::Update(int _iState)
{
	if(_iState != (int)BattleObjState::OBJ_NOEVENT)
	m_BattleMgr.Update(_iState);
}

void CUiMgr::Render(HDC hDC)
{
	m_BattleMgr.Render(hDC);
}

void CUiMgr::Release()
{
}

void CUiMgr::Late_Update()
{
	m_BattleMgr.Late_Update();
}
