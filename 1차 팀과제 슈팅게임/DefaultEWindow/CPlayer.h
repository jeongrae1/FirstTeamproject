#pragma once
#include "pch.h"
#include "CObj.h"
class CPlayer : public CObj
{
public:
	CPlayer();
	virtual ~CPlayer();

public:
	virtual void Initialize() override;
	virtual int Update() override;
	virtual void Render(HDC hDC) override;
	virtual void Release() override;
	void Late_Update() override;
private:
	void		Key_Input();

};

