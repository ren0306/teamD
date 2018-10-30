//使用するヘッダー
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\DrawFont.h"
#include "GameL\SceneManager.h"

#include "GameHead.h"
#include "ObjTenkey.h"
#include "SceneMain.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjTenkey::Init()
{

	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_r = false;
	m_mou_l = false;
}

//アクション
void CObjTenkey::Action()
{

	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//マウスのボタンの状態
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	flag();
}

//ドロー
void CObjTenkey::Draw()
{
	float c[4] = { 1,1,1,1 };
	//仮マウス位置表示
	wchar_t str[256];
	swprintf_s(str, L"x=%f,y=%f", m_mou_x, m_mou_y);
	Font::StrDraw(str, 20, 20, 12, c);

	Font::StrDraw(L"__________", 250, 290, 50, c);

	float d[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 1024.0f;
	src.m_bottom = 1024.0f;

	dst.m_top = 50.0f+300;
	dst.m_left = 0.0f+255;
	dst.m_right = 400.0f+100;
	dst.m_bottom =250.0f+300;
	Draw::Draw(2, &src, &dst, d, 0.0f);

}

void CObjTenkey::flag()
{
	float o[4] = { 0.5f,0.0f,1.0f,1.0f };

	int cnt = 0;
	//マウスの位置とクリックする場所で当たり判定

	/*
	789
	456
	123
	*/

	if (m_mou_x > 300 && m_mou_x < 345)
	{
		//７入力
		if (m_mou_y > 373 && m_mou_y < 410)
		{
			if (m_mou_l == true)
			{
				m_flag_7 = true;
			}
		}
		//4入力
		else if (m_mou_y > 416 && m_mou_y < 450)
		{
			if (m_mou_l == true)
			{
				m_flag_4 = true;
			}
		}
		//1入力
		else if (m_mou_y > 460 && m_mou_y < 494)
		{
			if (m_mou_l == true)
			{
				m_flag_1 = true;
			}
		}

	}
	if (m_mou_x > 353 && m_mou_x < 395)
	{
		//8入力
		if (m_mou_y > 373 && m_mou_y < 410)
		{
			if (m_mou_l == true)
			{
				m_flag_8 = true;
			}
		}
		//5入力
		else if (m_mou_y > 416 && m_mou_y < 450)
		{
			if (m_mou_l == true)
			{
				m_flag_5 = true;
			}
		}
		//2入力
		else if (m_mou_y > 460 && m_mou_y < 494)
		{
			if (m_mou_l == true)
			{
				m_flag_2 = true;
			}
		}

	}
	if (m_mou_x > 406 && m_mou_x < 445)
	{
		//9入力
		if (m_mou_y > 373 && m_mou_y < 410)
		{
			if (m_mou_l == true)
			{
				m_flag_9 = true;
			}
		}
		//6入力
		else if (m_mou_y > 416 && m_mou_y < 450)
		{
			if (m_mou_l == true)
			{
				m_flag_6 = true;
			}
		}
		//3入力
		else if (m_mou_y > 460 && m_mou_y < 494)
		{
			if (m_mou_l == true)
			{
				m_flag_3 = true;
			}
		}

	}


	//それぞれの数字のボタンをクリックしたときのフラグ
	if (m_flag_1 == true)
	{
		if (m_x1 == 1)
		{
			m_ps = 320;
		}
		else if (m_x1 == 2)
		{
			m_ps = 340;
		}
		else if (m_x1 == 3)
		{
			m_ps = 360;
		}
		Font::StrDraw(L"1", m_ps, 270, 50, o);
		m_ps -= 20;
		m_x1 += 1;

	}
	if (m_flag_2 == true)
	{
		if (m_x1 == 1)
		{
			m_ps = 320;
		}

		Font::StrDraw(L"2", m_ps, 270, 50, o);
		m_ps -= 20;
		m_x1 += 1;

	}
	if (m_flag_3 == true)
	{
		if (m_x1 == 1)
		{
			m_ps = 320;
		}

		Font::StrDraw(L"3", m_ps, 270, 50, o);
		m_ps -= 20;
		m_x1 += 1;

	}
	if (m_flag_4 == true)
	{
		if (m_x1 == 1)
		{
			m_ps = 320;
		}

		Font::StrDraw(L"4", m_ps, 270, 50, o);
		m_ps -= 20;
		m_x1 += 1;

	}
	if (m_flag_5 == true)
	{
		if (m_x1 == 1)
		{
			m_ps = 320;
		}

		Font::StrDraw(L"5", m_ps, 270, 50, o);
		m_ps -= 20;
		m_x1 += 1;

	}
	if (m_flag_6 == true)
	{
		if (m_x1 == 1)
		{
			m_ps = 320;
		}

		Font::StrDraw(L"6", m_ps, 270, 50, o);
		m_ps -= 20;
		m_x1 += 1;

	}
	if (m_flag_7 == true)
	{
		if (m_x1 == 1)
		{
			m_ps = 320;
		}

		Font::StrDraw(L"7", m_ps, 270, 50, o);
		m_ps -= 20;
		m_x1 += 1;

	}
	if (m_flag_8 == true)
	{
		if (m_x1 == 1)
		{
			m_ps = 320;
		}

		Font::StrDraw(L"8", m_ps, 270, 50, o);
		m_ps -= 20;
		m_x1 += 1;

	}
	if (m_flag_9 == true)
	{
		if (m_x1 == 1)
		{
			m_ps = 320;
		}

		Font::StrDraw(L"9", m_ps, 270, 50, o);
		m_ps -= 20;
		m_x1 += 1;

	}

	//どうしてこうなった

}




