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
}

//アクション
void CObjTitle::Action()
{
}

//ドロー
void CObjTitle::Draw()
{

	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	Font::StrDraw(L"ゲームを始める", 400, 400, 32, c);
}
