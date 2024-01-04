#include "CPlayer.h"
CPlayer::CPlayer()
{
}

CPlayer::~CPlayer()
{
	Release();
}

void CPlayer::Initialize()
{
	m_tInfo = { WINCX / 2.f, WINCY / 2.f, 100.f, 100.f };
	m_fSpeed = 10.f;
}

int CPlayer::Update()
{
	Key_Input();

	CObj::Update_Rect();
	return 0;
}

void CPlayer::Late_Update()
{

}
void CPlayer::Render(HDC hDC)
{
	Rectangle(hDC, m_tRect.left, m_tRect.top, m_tRect.right, m_tRect.bottom);
}

void CPlayer::Release()
{
}

void CPlayer::Key_Input()
{
	if (GetAsyncKeyState('D') & 0x8000)
		m_tInfo.fX += m_fSpeed;

	if (GetAsyncKeyState('A') & 0x8000)
		m_tInfo.fX -= m_fSpeed;

	if (GetAsyncKeyState('W') & 0x8000)
		m_tInfo.fY -= m_fSpeed;

	if (GetAsyncKeyState('S') & 0x8000)
		m_tInfo.fY += m_fSpeed;
}

