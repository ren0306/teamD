//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\DrawTexture.h"
#include "GameL\SceneObjManager.h"
#include "GameL\Audio.h"
#include "GameL\DrawFont.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p�w�b�_�[
#include "SceneTitle.h"
#include "ObjTitle.h"
#include "GameHead.h"





//�R���X�g���N�^
CSceneTitle::CSceneTitle()
{

}

//�e�X�g���N�^
CSceneTitle::~CSceneTitle()
{

}

//�Q�[�����C�����������]�b�g
void CSceneTitle::InitScene()
{

	CObjTitle* obj = new CObjTitle();
	Objs::InsertObj(obj, OBJ_TITLE, 1);

	Font::SetStrTex(L"�Q�[������");
	Font::SetStrTex(L"PLESE PUSH ENTER");

}

//�Q�[�����C�����s�����]�b�g
void CSceneTitle::Scene()
{

}