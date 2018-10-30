#pragma once
//使用するヘッダー
#include"GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：タイトル
class CObjTenkey :public CObj
{
public:
	CObjTenkey() {};
	~CObjTenkey() {};
	void Init();		//イニシャライズ
	void Action();		//アクション
	void Draw();		//ドロー
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
	int m_x1 = 0;
	int m_ps = 300;
	

};