//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"
#include "GameL\HitBoxManager.h"

#include "GameHead.h"
#include "ObjEnemy2.h"
#include "UtilityModule.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjEnemy2::CObjEnemy2(float x, float y)
{
	m_x = x;
	m_y = y;
}

//�C�j�V�����C�Y
void CObjEnemy2::Init()
{
	m_hp = 30;
	m_atk = 2;
	m_time = 0;
	m_r = 0.0f;
	m_vx = 0.0f;
	m_vy = 0.0f;

	//�����蔻��pHitBox���쐬
	Hits::SetHitBox(this, m_x, m_y, 150, 150, ELEMENT_ENEMY, OBJ_ENEMY2, 1);

}

//�A�N�V����
void CObjEnemy2::Action()
{
	m_time++;

	/*
	//�ʏ�e����
	if ( m_time % 50 == 0 )
	{
		//�e�ۓG�@�I�u�W�F�N�g
		CObjBulletEnemy* obj_b=new CObjBulletEnemy(m_x+68, m_y+114);
		Objs::InsertObj(obj_b, OBJ_BULLET_ENEMY, 100);
	}
	*/

	//m_time�̏�����
	if ( m_time > 1000 )
	{
		m_time = 0;
	}
	
	//�p�x���Z
	m_r += 2.0f;

	//360���ŏ����l�ɖ߂�
	if (m_r > 360.0f)
		m_r = 0.0f;

	//�ړ�����
	m_vx = 0.0f;
	m_vy = sin(3.14/180*m_r);//sin�Ƃ����߂�m_vy�ɓ����

	//�ړ��x�N�g���̐��K��
	UnitVec(&m_vy, &m_vx);

	//���x�t����B
	m_vx *= 1.5f;
	m_vy *= 1.5f;

	//�ړ��x�N�g�������W�ɉ��Z����
	m_x += m_vx;
	m_y += m_vy;


	//HitBox�̓��e���X�V
	CHitBox* hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

	//�{�X�@�����S�ɗ̈�O�ɏo����{�X�@��j������
	bool check = CheckWindow(m_x, m_y, -32.0f, -32.0f, 800.0f, 600.0f);
	if (check == false)
	{
		this->SetStatus(false);		//���g�ɍ폜���߂��o���B
		Hits::DeleteHitBox(this);	//�{�X�@�����L����HitBox���폜����B

		return;
	}

	//�e�ۂƐڐG������HP�����炷
	if (hit->CheckObjNameHit(OBJ_BULLET) != nullptr)
	{
		m_hp -= 1;
	}

	//HP��0�ɂȂ�����j��
	if(m_hp<=0)
	{
		this->SetStatus(false);
		Hits::DeleteHitBox(this);

		//�N���A��A���̃X�e�[�W�Ɉڍs������
		//Scene::SetScene(new CSceneClear());
	}
}

//�h���[
void CObjEnemy2::Draw()
{
	// �`��J���[���  R = RED  G = Green  B = Blue A = alpha(���ߏ��)
	float  c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src; //�`�挳�؂���ʒu
	RECT_F dst; //�`���\���ʒu

	//�؂���ʒu�̐ݒ�
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 150.0f;
	src.m_bottom = 150.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f + m_y;
	dst.m_left = 0.0f + m_x;
	dst.m_right = 150.0f + m_x;
	dst.m_bottom = 150.0f + m_y;

	//2�Ԗڂɓo�^�����O���t�B�b�N��src�Edst�Ec�̏������ɕ`��
	Draw::Draw(2, &src, &dst, c, 0.0f);

}