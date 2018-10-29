//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"

#include "GameHead.h"
#include "GAME OVER2.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjGAMEOVER2::Init()
{

}

//アクション
void CObjGAMEOVER2::Action()
{

}

//ドロー
void CObjGAMEOVER2::Draw()
{
	float c[4] = { 1.0f,0.0f,0.0f,1.0f };
	Font::StrDraw(L"GAME OVER", 270, 50, 50, c);
	float m[4] = { 0.5f,0.5f,0.5f,1.0f };

	Font::StrDraw(L"敵に倒された", 300, 400, 30, m);
	float s[4] = { 1.0f,1.0f,1.0f,1.0f };
	Font::StrDraw(L"タイトル画面へ", 280, 500, 30, s);

}