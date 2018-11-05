#pragma once

//�I�u�W�F�N�g�l�[��------------------------------
enum OBJ_NAME
{
	OBJ_NO_NAME,	//�I�u�W�F�N�g������(�֎~)
	//�Q�[���Ŏg���I�u�W�F�N�g�̖��O
	//OBJ_�����ƕ\�L
	OBJ_TITLE,
	OBJ_HERO,
	OBJ_BULLET,
	OBJ_ENEMY1,
	OBJ_ENEMY2,
	OBJ_ENEMY1,
	OBJ_ENEMY3,
	OBJ_BULLET_ENEMY,
	OBJ_GAMEOVER,
	OBJ_MAIN,
	OBJ_BACKGROUND,
	OBJ_GAMEOVER2,
	OBJ_ED1,
	OBJ_ED3,
	OBJ_ED2,
	OBJ_NAZO,
	OBJ_TENKEY,
	OBJ_TEKI1,
	OBJ_TEKI2,
	OBJ_STG,
	OBJ_STG3,

};
//------------------------------------------------

//�����蔻�葮��----------------------------------
enum HIT_ELEMENTS
{
	ELEMENT_NULL,//�������� �S�Ă̑����Ɠ����蔻�肪���s�����
	//�ȉ��@�����������m�ł͓����蔻��͎��s����Ȃ�
	//�����͒ǉ��\�����A�f�o�b�N���̐F�͏����ݒ蕪��������
	ELEMENT_PLAYER,
	ELEMENT_ENEMY,
	ELEMENT_ITEM,
	ELEMENT_MAGIC,
	ELEMENT_FIELD,
	ELEMENT_RED,
	ELEMENT_GREEN,
	ELEMENT_BLUE,
	ELEMENT_BLACK,
	ELEMENT_WHITE,


};
//------------------------------------------------

//------------------------------------------------
//�Z�[�u�����[�h�ƃV�[���Ԃ̂���肷��f�[�^
struct UserData
{
	int mSeveData;	//�T���v���Z�[�u�f�[�^
	
};
//------------------------------------------------


//�Q�[�����Ŏg�p�����O���[�o���ϐ��E�萔�E��--



//------------------------------------------------
//�Q�[�����Ŏg�p����N���X�w�b�_------------------


//------------------------------------------------

//�Q�[���V�[���I�u�W�F�N�g�w�b�_------------------
#include "ObjHero.h"
#include "CObjBullet.h"
#include "ObjEnemy1.h"
#include "ObjEnemy2.h"
#include "ObjEnemy3.h"
#include "CObjBullteEnemy.h"
#include "ObjTitle.h"
#include "ObjMain.h"
#include "GAMEOVER1.h"
#include "GAME OVER2.h"
#include "ObjBackGround.h"
#include "ObjED2.h"
#include "ObjED1.h"
#include "ObjED3.h"
#include "ObjTenkey.h"
#include "Objteki1.h"
#include "Objteki2.h"
#include "ObjSTG.h"
#include "ObjSTG2.h"
#include "ObjSTG3.h"
//------------------------------------------------

//�Q�[���V�[���N���X�w�b�_------------------------
#include "SceneMain.h"
#include "SceneTitle.h"
#include "GameOver.h"
#include "ShootingMain.h"
#include "GameOver2.h"
#include "SceneED1.h"
#include "SceneED3.h"
#include "SceneED2.h"
#include "SceneNazo.h"
#include "SceneSTG.h"
#include "SceneSTG3.h"
#include "SceneSTG2.h"
//-----------------------------------------------

//�V�[���X�^�[�g�N���X---------------------------
//�Q�[���J�n���̃V�[���N���X�o�^
#define SET_GAME_START CSceneSTG2
//-----------------------------------------------