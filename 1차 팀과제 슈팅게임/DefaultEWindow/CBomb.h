#pragma once
#include "pch.h"
class CBomb
{
public:
	CBomb();
	~CBomb();

	void		Initialize();
	void		Update(int _iState);
	void		Render(HDC hDC);
	void		Release();
	void		Late_Update();
	void		Add_Bomb();
	void		Sub_Bomb();
private:
	int m_iBombCount;
};

