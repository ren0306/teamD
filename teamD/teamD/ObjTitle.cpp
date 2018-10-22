//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"
#include "GameHead.h"
#include "ObjTitle.h"
#include "GameL\SceneManager.h"
#include "GameL\WinInputs.h"
#include "GameL\DrawFont.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjTitle::Init()
{
	m_key_flag = false;

}
//�A�N�V����
void CObjTitle::Action()
{
	//�G���^�[�N��
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

//�h���[
void CObjTitle::Draw()
{
	float f[4] = { 1.0f,1.0f,1.0f,1.0f };
	Font::StrDraw(L"�Q�[������", 320, 200, 32, f);

	Font::StrDraw(L"PLESE PUSH ENTER", 280, 340, 32, f);



	//�`��J���[���@R��RED G=Green�@B=Blue A=alpha(���ߏ��)
	float c[4] = { 1.0f,1.0f,0.0f,1.0f };
	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`�挳�\���ʒu
	//�؂���ʒu�̐ݒ�
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 150.0f;
	src.m_bottom = 150.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f + m_y;
	dst.m_left = 0.0f + m_x;
	dst.m_right = 32.0f + m_x;
	dst.m_bottom = 32.0f + m_y;

	//�O�Ԗڂɓo�^�����O���t�B�b�N��src�Edst�Ec�̌��̏��ɕ`��
	Draw::Draw(0, &src, &dst, c, 0.0f);


}