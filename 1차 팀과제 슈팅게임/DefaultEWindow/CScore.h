#pragma once
#include "pch.h"

class CScore
{
public:
	CScore();
	~CScore();

	void		Initialize();
	void		Update(int _iState);
	void		Render(HDC hDC);
	void		Release();
	void		Late_Update();
	void		Add_Score();
private:
	int m_Score;
};



enum class MonsterScore
{
	MONSTER = 10,
	END
};