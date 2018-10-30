//�g�p����w�b�_�[
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\DrawFont.h"
#include "GameL\SceneManager.h"

#include "GameHead.h"
#include "ObjTenkey.h"
#include "SceneMain.h"

#define DF 300//�f�t�H���g���W
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjTenkey::Init()
{

	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_r = false;
	m_mou_l = false;
}

//�A�N�V����
void CObjTenkey::Action()
{

	//�}�E�X�̈ʒu���擾
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//�}�E�X�̃{�^���̏��
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	flag();
}

//�h���[
void CObjTenkey::Draw()
{
	float c[4] = { 1,1,1,1 };
	//���}�E�X�ʒu�\��
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
	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��

	/*
	789
	456
	123
	*/

	if (m_mou_x > 300 && m_mou_x < 345)
	{
		//�V����
		if (m_mou_y > 373 && m_mou_y < 410)
		{
			if (m_mou_l == true)
			{
				m_flag_7 = true;
				cnt++;
			}
		}
		//4����
		else if (m_mou_y > 416 && m_mou_y < 450)
		{
			if (m_mou_l == true)
			{
				m_flag_4 = true;
			}
		}
		//1����
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
		//8����
		if (m_mou_y > 373 && m_mou_y < 410)
		{
			if (m_mou_l == true)
			{
				m_flag_8 = true;
			}
		}
		//5����
		else if (m_mou_y > 416 && m_mou_y < 450)
		{
			if (m_mou_l == true)
			{
				m_flag_5 = true;
			}
		}
		//2����
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
		//9����
		if (m_mou_y > 373 && m_mou_y < 410)
		{
			if (m_mou_l == true)
			{
				m_flag_9 = true;
			}
		}
		//6����
		else if (m_mou_y > 416 && m_mou_y < 450)
		{
			if (m_mou_l == true)
			{
				m_flag_6 = true;
			}
		}
		//3����
		else if (m_mou_y > 460 && m_mou_y < 494)
		{
			if (m_mou_l == true)
			{
				m_flag_3 = true;
			}
		}

	}
	if (cnt == 1)
	{
		DF += 0;
	}
	//���ꂼ��̐����̃{�^�����N���b�N�����Ƃ��̃t���O
	if (m_flag_1 == true)
	{
		Font::StrDraw(L"1", DF, 270, 50, o);
	}
	if (m_flag_2 == true)
	{
		Font::StrDraw(L"2", DF, 270, 50, o);
	}
	if (m_flag_3 == true)
	{
		Font::StrDraw(L"3", DF, 270, 50, o);
	}
	if (m_flag_4 == true)
	{
		Font::StrDraw(L"4", DF, 270, 50, o);
	}
	if (m_flag_5 == true)
	{
		Font::StrDraw(L"5", DF, 270, 50, o);
	}
	if (m_flag_6 == true)
	{
		Font::StrDraw(L"6", DF, 270, 50, o);
	}
	if (m_flag_7 == true)
	{
		Font::StrDraw(L"7", DF, 270, 50, o);
	}
	if (m_flag_8 == true)
	{
		Font::StrDraw(L"8", DF, 270, 50, o);
	}
	if (m_flag_9 == true)
	{
		Font::StrDraw(L"9", DF, 270, 50, o);
	}


}




