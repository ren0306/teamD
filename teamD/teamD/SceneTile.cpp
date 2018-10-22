//STLデバッグ機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\DrawTexture.h"
#include "GameL\SceneObjManager.h"
#include "GameL\Audio.h"
#include "GameL\DrawFont.h"


//使用するネームスペース
using namespace GameL;

//使用ヘッダー
#include "SceneTitle.h"
#include "ObjTitle.h"
#include "GameHead.h"





//コンストラクタ
CSceneTitle::CSceneTitle()
{

}

//テストラクタ
CSceneTitle::~CSceneTitle()
{

}

//ゲームメイン初期化メゾット
void CSceneTitle::InitScene()
{

	CObjTitle* obj = new CObjTitle();
	Objs::InsertObj(obj, OBJ_TITLE, 1);

	Font::SetStrTex(L"ゲーム制作");
	Font::SetStrTex(L"PLESE PUSH ENTER");

}

//ゲームメイン実行中メゾット
void CSceneTitle::Scene()
{

}