#pragma once
//�g�p����w�b�_�[
#include "GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g:�G�@
class CObjTitle : public CObj
{
public:
	CObjTitle() {};
	~CObjTitle() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;	//�G�@��x�����̈ʒu
	float m_y;	//�G�@��y�����̈ʒu
	float m_vx; //�G�@�ړ��x�N�g��X
	float m_vy; //�G�@�ړ��x�N�g��Y
	bool m_key_flag;
	int	  m_hp = 30;
	float m_r;
	float m_maxhp = 30;

};
