//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL	(0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include "GameL\DrawFont.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p�w�b�_�[
#include "SceneMain.h"
#include "SceneTitle.h"
#include "GameHead.h"

//�R���X�g���N�^
CSceneED3::CSceneED3()
{
}

//�f�X�g���N�^
CSceneED3::~CSceneED3()
{
}

//�Q�[���^�C�g�����������\�b�h
void CSceneED3::InitScene()
{
	//�o�͂����镶���̃O���t�B�b�N���쐬
	Font::SetStrTex(L"�Q�[�����n�߂�");

	//�^�C�g���I�u�W�F�N�g�쐬
	CObjED3* obj = new CObjED3();
	Objs::InsertObj(obj, OBJ_ED3, 10);
}

//�Q�[���^�C�g�����s�����\�b�h
void CSceneED3::Scene()
{
}