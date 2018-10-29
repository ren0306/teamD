//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"

#include "GameHead.h"
#include "GAMEOVER1.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjGAMEOVER::Init()
{

}

//アクション
void CObjGAMEOVER::Action()
{

}

//ドロー
void CObjGAMEOVER::Draw()
{
	float c[4] = { 1.0f,0.0f,0.0f,1.0f };
	Font::StrDraw(L"GAME OVER", 270, 50, 50, c);
	float m[4] = { 0.5f,0.5f,0.5f,1.0f };

	Font::StrDraw(L"空腹で倒れた", 300, 400, 30, m);
	float s[4] = { 1.0f,1.0f,1.0f,1.0f };
	Font::StrDraw(L"タイトル画面へ", 280, 500, 30,s);

}