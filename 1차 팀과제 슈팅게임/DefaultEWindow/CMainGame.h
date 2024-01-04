#pragma once
#include "pch.h"
#include "CObj.h"
#include "CUiMgr.h"
class CMainGame
{
public:
	CMainGame();
	~CMainGame();

public:
	void		Initialize();
	void		Update();
	void		Render();
	void		Release();
	void		Late_Update();
private:
	HDC			m_DC;
	CObj* m_pPlayer;
	CUiMgr m_UiMgr;
};

