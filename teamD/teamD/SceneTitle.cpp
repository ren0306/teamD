//STL�f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL 0
#define _HAS_ITERATOR_DEBUGGING 0

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneManager.h"
#include "GameL\DrawFont.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p����w�b�_�[
#include "SceneTitle.h"
#include "GameHead.h"

//�R���X�g���N�^
CSceneTitle::CSceneTitle()
{

}

//�f�X�g���N�^
CSceneTitle::~CSceneTitle()
{

}

//�Q�[�����C�����������\�b�h
void CSceneTitle::InitScene()
{
	//�o�͂����镶���̃O���t�B�b�N���쐬
	Font::SetStrTex(L"Choice");
}

//�Q�[�����C�����s�����\�b�h
void CSceneTitle::Scene()
{
	
}
