//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameHead.h"
#include "ObjTitle.h"
#include "GameL\SceneManager.h"
#include "GameL\WinInputs.h"
#include "GameL\DrawFont.h"
//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjTitle::Init()
{
	m_key_flag = false;

}
//アクション
void CObjTitle::Action()
{
	//エンター起動
	if (Input::GetVKey(VK_RETURN) == true)
	{
		if (m_key_flag == true)
		{
			Scene::SetScene(new CSceneMain());
			m_key_flag = false;
		}
	}
	else
	{
		m_key_flag = true;
	}

}

//ドロー
void CObjTitle::Draw()
{
	float f[4] = { 1.0f,1.0f,1.0f,1.0f };
	Font::StrDraw(L"ゲーム制作", 320, 200, 32, f);

	Font::StrDraw(L"PLESE PUSH ENTER", 280, 340, 32, f);



	//描画カラー情報　R＝RED G=Green　B=Blue A=alpha(透過情報)
	float c[4] = { 1.0f,1.0f,0.0f,1.0f };
	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画元表示位置
	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 150.0f;
	src.m_bottom = 150.0f;

	//表示位置の設定
	dst.m_top = 0.0f + m_y;
	dst.m_left = 0.0f + m_x;
	dst.m_right = 32.0f + m_x;
	dst.m_bottom = 32.0f + m_y;

	//０番目に登録したグラフィックをsrc・dst・cの元の情報に描画
	Draw::Draw(0, &src, &dst, c, 0.0f);


}