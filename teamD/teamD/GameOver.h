#pragma once
//�g�p����w�b�_�[�t�@�C��
#include "GameL\SceneManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�V�[���F�Q�[���I�[�o�[
class CSceneGameOver:public CScene
{
	public:
		CSceneGameOver();
		~CSceneGameOver();
		void InitScene();	//�Q�[���I�[�o�[�̏��������\�b�h
		void Scene();		//�Q�[���I�[�o�[�̎��s�����\�b�h
	private:
};