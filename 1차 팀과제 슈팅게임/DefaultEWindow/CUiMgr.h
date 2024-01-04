#pragma once
#include "CBattleUIMgr.h"
class CUiMgr
{
public:
	CUiMgr();
	~CUiMgr();

	void		Initialize();
	void		Update(int _iState);
	void		Render(HDC hDC);
	void		Release();
	void		Late_Update();


private:
	CBattleUIMgr m_BattleMgr;
};



