//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"

#include "GameHead.h"
#include "GAMEOVER1.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjGAMEOVER::Init()
{

}

//�A�N�V����
void CObjGAMEOVER::Action()
{

}

//�h���[
void CObjGAMEOVER::Draw()
{
	float c[4] = { 1.0f,0.0f,0.0f,1.0f };
	Font::StrDraw(L"GAME OVER", 270, 50, 50, c);
	float m[4] = { 0.5f,0.5f,0.5f,1.0f };

	Font::StrDraw(L"�󕠂œ|�ꂽ", 300, 400, 30, m);
	float s[4] = { 1.0f,1.0f,1.0f,1.0f };
	Font::StrDraw(L"�^�C�g����ʂ�", 280, 500, 30,s);

}