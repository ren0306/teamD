//STLデバック機能をOFFにする
#define _SECURE_SCL 0
#define _HAS_ITERATOR_DEBUGGING 0

//GameLで使用するヘッダー
#include "GameL\SceneManager.h"
#include "GameL\DrawFont.h"

//使用するネームスペース
using namespace GameL;

//使用するヘッダー
#include "SceneTitle.h"
#include "GameHead.h"

//コンストラクタ
CSceneTitle::CSceneTitle()
{

}

//デストラクタ
CSceneTitle::~CSceneTitle()
{

}

//ゲームメイン初期化メソッド
void CSceneTitle::InitScene()
{
	//出力させる文字のグラフィックを作成
	Font::SetStrTex(L"Choice");
}

//ゲームメイン実行中メソッド
void CSceneTitle::Scene()
{
	
}
