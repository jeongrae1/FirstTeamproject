#include "pch.h"
#include "CScore.h"
#include "CBattleUIMgr.h"

CScore::CScore() : m_Score(0)
{
}

CScore::~CScore()
{
	Release();
}

void CScore::Initialize()
{

}

void CScore::Update(int _iState)
{
	if(_iState==(int)BattleObjState::MONSTER_DEAD)
	Add_Score();
}

void CScore::Render(HDC hDC)
{
	TCHAR szScore[32] = L"";
	swprintf_s(szScore, L"Score:%d", m_Score);
	TextOut(hDC, (int)BattleUiPos::SCORE_X, (int)BattleUiPos::SCORE_Y, szScore,
		lstrlen(szScore));
}

void CScore::Release()
{

}

void CScore::Late_Update()
{

}

void CScore::Add_Score() 
{
	m_Score += (int)MonsterScore::MONSTER;
}
