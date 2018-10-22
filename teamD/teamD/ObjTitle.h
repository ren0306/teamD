#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト:敵機
class CObjTitle : public CObj
{
public:
	CObjTitle() {};
	~CObjTitle() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;	//敵機のx方向の位置
	float m_y;	//敵機のy方向の位置
	float m_vx; //敵機移動ベクトルX
	float m_vy; //敵機移動ベクトルY
	bool m_key_flag;
	int	  m_hp = 30;
	float m_r;
	float m_maxhp = 30;

};
