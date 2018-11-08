//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"
#include "GameL\HitBoxManager.h"

#include "GameHead.h"
#include "Objteki4.h"
#include "UtilityModule.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjteki4::CObjteki4(float x, float y)
{
	m_x = x;
	m_y = y;
}

//�C�j�V�����C�Y
void CObjteki4::Init()
{
	m_vx = 0.0f;
	m_vy = 0.0f;

	//�����蔻��HitBox
	Hits::SetHitBox(this, m_x, m_y, 160, 210, ELEMENT_ENEMY, OBJ_ENEMY4, 1);

}

//�A�N�V����
void CObjteki4::Action()
{
	//�p�x���Z
	m_r += 2.0f;

	//360���ŏ����l�ɖ߂�
	if (m_r > 360.0f)
		m_r = 0.0f;

	//�ړ�����
	m_vx = sin(3.14 / 180 * m_r);
	m_vy = 0.0f;

	//�ړ��x�N�g�����K��
	UnitVec(&m_vy, &m_vx);

	//���x�t����B
	m_vx *= 1.5f;
	m_vy *= 1.5f;

	//�ړ��x�N�g�������W�ɉ��Z����
	m_x += m_vx;
	m_y += m_vy;
	//HitBox�̓��e���X�V
	//CHitBox* hit = Hits::GetHitBox(this);
	//hit->SetPos(m_x + 100, m_y + 50);

	//�G�@�����S�ɗ̈�O�ɂł���G�@��j������
	bool check = CheckWindow(m_x, m_y, -32.0f, -32.0, 800.0f, 600.0f);
	if (check == false)
	{
		this->SetStatus(false);		//���g�ɍ폜����
									//Hits::DeleteHitBox(this);
	}

	//HitBox�̓��e���X�V
	CHitBox* hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);
}

//�h���[
void CObjteki4::Draw()
{
	//�`��J���[���@R=RED�@G=Green�@B=Blue�@A=alpha(���ߏ��jA=alpha(���ߏ��j
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	//�؂���ʒu�̐ݒ�
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 1152.0f;
	src.m_bottom = 1772.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f + m_y;
	dst.m_left = 0.0f + m_x;
	dst.m_right = 160.0f + m_x;
	dst.m_bottom = 210.0f + m_y;

	//0�Ԃ߂ɓo�^�����O���t�B�b�N��src�Edst�Ec�̏������ɕ`��
	Draw::Draw(10, &src, &dst, c, 0.0f);
}