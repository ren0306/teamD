//�g�p����w�b�_�[
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"

#include "GameHead.h"
#include "ObjTitle.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjTitle::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
}

//�A�N�V����
void CObjTitle::Action()
{
	//�}�E�X�̈ʒu���擾
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
}

//�h���[
void CObjTitle::Draw()
{

	swprintf_s(str, L"x=%f,y=%f", m_mou_x, m_mou_y);

	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	Font::StrDraw(L"�Q�[�����n�߂�", 400, 400, 32, c);
}
