//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"

#include "GameHead.h"
#include "GAME OVER2.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjGAMEOVER2::Init()
{

}

//�A�N�V����
void CObjGAMEOVER2::Action()
{

}

//�h���[
void CObjGAMEOVER2::Draw()
{
	float c[4] = { 1.0f,0.0f,0.0f,1.0f };
	Font::StrDraw(L"GAME OVER", 270, 50, 50, c);
	float m[4] = { 0.5f,0.5f,0.5f,1.0f };

	Font::StrDraw(L"�G�ɓ|���ꂽ", 300, 400, 30, m);
	float s[4] = { 1.0f,1.0f,1.0f,1.0f };
	Font::StrDraw(L"�^�C�g����ʂ�", 280, 500, 30, s);

}