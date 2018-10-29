//STLデバッグ機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"

//使用するネームスペース
using namespace GameL;

//使用ヘッダー
#include "SceneMain.h"
#include "GameHead.h"

//コンストラクタ
CSceneMain::CSceneMain()
{
}




//テストラクタ
CSceneMain::~CSceneMain()
{
}



//ゲームメイン初期化メソッド
void CSceneMain::InitScene()
{
	//外部グラフィックファイルを読み込み０番に登録
	Draw::LoadImageW(L"doukutu", 0, TEX_SIZE_512);

	CObjMain* p = new CObjMain();
	Objs::InsertObj(p, OBJ_MAIN, 21);

	CObjBackGround* b = new CObjBackGround();
	Objs::InsertObj(b, OBJ_BACKGROUND, 0);

}



//ゲームメイン実行中メソッド
void CSceneMain::Scene()
{
}
