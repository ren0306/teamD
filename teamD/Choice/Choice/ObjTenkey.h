#pragma once
//�g�p����w�b�_�[
#include"GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g�F�^�C�g��
class CObjTenkey :public CObj
{
public:
	CObjTenkey() {};
	~CObjTenkey() {};
	void Init();		//�C�j�V�����C�Y
	void Action();		//�A�N�V����
	void Draw();		//�h���[
	void flag();
private:
	float m_mou_x;
	float m_mou_y;
	bool m_mou_r;
	bool m_mou_l;	
	bool m_flag_1 = false;
	bool m_flag_2 = false;
	bool m_flag_3 = false;
	bool m_flag_4 = false;
	bool m_flag_5 = false;
	bool m_flag_6 = false;
	bool m_flag_7 = false;
	bool m_flag_8 = false;
	bool m_flag_9 = false;
	bool m_flag_one = false;
	float m_p=0.0f;


};