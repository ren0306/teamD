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
#include "Objteki2.h"
#include "SceneSTG2.h"
#include "GameHead.h"
#include "ObjHero.h"

//�R���X�g���N�^
CSceneSTG2::CSceneSTG2()
{
}

//�f�X�g���N�^
CSceneSTG2::~CSceneSTG2()
{
}

//�Q�[���^�C�g�����������\�b�h
void CSceneSTG2::InitScene()
{
	//�w�i��ǂݍ���0�Ԃɓo�^
	Draw::LoadImageW(L"ss01.png", 4, TEX_SIZE_512);
	//�G�Q��ǂݍ���10�Ԃɓo�^
	Draw::LoadImageW(L"teki2.png", 10, TEX_SIZE_512);
	//��l����ǂݍ���1�Ԃɓo�^
	Draw::LoadImageW(L"hero.png", 5, TEX_SIZE_512);

	//STG�I�u�W�F�N�g�쐬
	CObjSTG* obj = new CObjSTG();
	Objs::InsertObj(obj, OBJ_STG, 10);
	//�w�i
	CObjBackGround* p = new CObjBackGround();
	Objs::InsertObj(p, OBJ_BACKGROUND, 0);
	//�G
	CObjteki2* objb = new CObjteki2(200, 10);
	Objs::InsertObj(objb, OBJ_TEKI2, 50);
	//��l��
	CObjHero*ob = new CObjHero();
	Objs::InsertObj(ob, OBJ_HERO, 150);




}

//�Q�[���^�C�g�����s�����\�b�h
void CSceneSTG2::Scene()
{
}