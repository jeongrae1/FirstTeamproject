#include "CMainGame.h"
#include "CPlayer.h"
CMainGame::CMainGame()
	: m_pPlayer(nullptr)
{
}

CMainGame::~CMainGame()
{
	Release();
}

void CMainGame::Initialize()
{
	m_DC = GetDC(g_hWnd);

	if (!m_pPlayer)
	{
		m_pPlayer = new CPlayer;
		m_pPlayer->Initialize();
	}

	m_UiMgr.Initialize();
}

void CMainGame::Update()
{
	int iResult(0);
	iResult=m_pPlayer->Update();
	m_UiMgr.Update(iResult);
}
void CMainGame::Late_Update()
{
	m_pPlayer->Late_Update();
	m_UiMgr.Late_Update();
}
void CMainGame::Render()
{
	Rectangle(m_DC, 0, -10, WINCX, WINCY);
	Rectangle(m_DC, 100, -10, WINCX-100, WINCY);



	m_pPlayer->Render(m_DC);
	m_UiMgr.Render(m_DC);
}

void CMainGame::Release()
{
	Safe_Delete<CObj*>(m_pPlayer);

	ReleaseDC(g_hWnd, m_DC);
}


