#pragma once
#include "pch.h"

class CLife
{
public:
	CLife();
	~CLife();

	void		Initialize();
	void		Update(int _iState);
	void		Render(HDC hDC);
	void		Release();
	void		Late_Update();
	void		Add_Life();
	void		Sub_Life();
private:
	int m_iLifeCount;
};


