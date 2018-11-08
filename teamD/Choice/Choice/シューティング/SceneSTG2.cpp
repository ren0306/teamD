//STLデバッグ機能をOFFにする
#define _SECURE_SCL	(0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "../GameL\SceneObjManager.h"
#include "../GameL\DrawFont.h"

//使用するネームスペース
using namespace GameL;

//使用ヘッダー
#include "../ゲームメイン/SceneMain.h"
#include "Objteki2.h"
#include "SceneSTG2.h"
#include "../GameHead.h"
#include "ObjHero.h"

//コンストラクタ
CSceneSTG2::CSceneSTG2()
{
}

//デストラクタ
CSceneSTG2::~CSceneSTG2()
{
}

//ゲームタイトル初期化メソッド
void CSceneSTG2::InitScene()
{
	//背景を読み込み0番に登録
	Draw::LoadImageW(L"ss01.png", 4, TEX_SIZE_512);
	//敵２を読み込み10番に登録
	Draw::LoadImageW(L"teki2.png", 10, TEX_SIZE_512);
	//主人公を読み込み1番に登録
	Draw::LoadImageW(L"hero.png", 5, TEX_SIZE_512);

	//STGオブジェクト作成
	CObjSTG* obj = new CObjSTG();
	Objs::InsertObj(obj, OBJ_STG, 10);
	//背景
	CObjBackGround* p = new CObjBackGround();
	Objs::InsertObj(p, OBJ_BACKGROUND, 0);
	//敵
	CObjteki2* objb = new CObjteki2(200, 10);
	Objs::InsertObj(objb, OBJ_TEKI2, 50);
	//主人公
	CObjHero*ob = new CObjHero();
	Objs::InsertObj(ob, OBJ_HERO, 150);




}

//ゲームタイトル実行中メソッド
void CSceneSTG2::Scene()
{
}