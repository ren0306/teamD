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
}

//�A�N�V����
void CObjTitle::Action()
{
}

//�h���[
void CObjTitle::Draw()
{

	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	Font::StrDraw(L"�Q�[�����n�߂�", 400, 400, 32, c);
}
