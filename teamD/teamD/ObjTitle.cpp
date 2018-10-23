//使用するヘッダー
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"

#include "GameHead.h"
#include "ObjTitle.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjTitle::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
}

//アクション
void CObjTitle::Action()
{
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
}

//ドロー
void CObjTitle::Draw()
{

	swprintf_s(str, L"x=%f,y=%f", m_mou_x, m_mou_y);

	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	Font::StrDraw(L"ゲームを始める", 400, 400, 32, c);
}
