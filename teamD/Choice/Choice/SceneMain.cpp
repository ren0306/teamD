//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p�w�b�_�[
#include "SceneMain.h"
#include "GameHead.h"

//�R���X�g���N�^
CSceneMain::CSceneMain()
{
}




//�e�X�g���N�^
CSceneMain::~CSceneMain()
{
}



//�Q�[�����C�����������\�b�h
void CSceneMain::InitScene()
{
	CObjMain* p = new CObjMain();
	Objs::InsertObj(p, OBJ_MAIN, 21);

}



//�Q�[�����C�����s�����\�b�h
void CSceneMain::Scene()
{
}