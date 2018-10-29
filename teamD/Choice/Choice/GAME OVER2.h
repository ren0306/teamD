#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：タイトル
class CObjGAMEOVER2 :public CObj
{
public:
	CObjGAMEOVER2() {};
	~CObjGAMEOVER2() {};
	void Init();	//イニシャライズ
	void Action();	//アクション
	void Draw();	//ドロー
}; 
