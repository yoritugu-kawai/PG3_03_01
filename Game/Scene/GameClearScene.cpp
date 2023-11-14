#include "GameClearScene.h"

void GameClearScene::Initialize() {}

void GameClearScene::Update() {
	if (InputManager::PreKey(DIK_SPACE)) {
		sceneNo_ = TITLE;
	}
}

void GameClearScene::Draw() { Novice::DrawBox(0, 0, 1280, 720, 0.0f, 0x00FFFFFF, kFillModeSolid); }
