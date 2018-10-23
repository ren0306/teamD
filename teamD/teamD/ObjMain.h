#pragma once
//使用するヘッダーファイル
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：ゲームタイトル
class CObjMain :public CObj
{
public:
	CObjMain() {};
	~CObjMain() {};
	void Init();
	void Action();
	void Draw();
private:

};