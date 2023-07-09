﻿# include <Siv3D.hpp>
# include "../include/Asset.hpp"
# include "../include/Utility.hpp"
# include "../include/HowToPlay.hpp"

//#####################################
// 遊び方説明シーン
//#####################################

// 遊び方説明シーンのコンストラクタ
HowToPlay::HowToPlay(const InitData& init)
	: IScene{ init }
{
	// 遊び方説明シーン用アセットを登録
	HowToPlayAssetLoad();
}

// 遊び方説明シーンの更新関数
void HowToPlay::update()
{
	// Zキーの入力
	if (KeyZ.down())
	{
		// スタート音
		AudioAsset(U"Start").play();
		// ゲームシーンに遷移
		changeScene(SceneState::Game, 0.3s);
	}
}

// 遊び方説明シーンの描画関数
void HowToPlay::draw() const
{
	// 遊び方を説明する画像を表示
	TextureAsset(U"HowToPlay").draw();
}
