#pragma once
#include "CScore.h"
#include "CLife.h"
#include "CBomb.h"
class CBattleUIMgr
{
public:
	CBattleUIMgr();
	~CBattleUIMgr();

	void		Initialize();
	void		Update(int _iState);
	void		Render(HDC hDC);
	void		Release();
	void		Late_Update();
private:
	CScore m_Score;
	CLife m_Life;
	CBomb m_Bomb;
};

enum class BattleUiPos
{
	SCORE_X = 10,
	SCORE_Y = 10,
	LIFE_X = 10,
	LIFE_Y = 30,
	BOMB_X = 10,
	BOMB_Y = 50,
	END
};
