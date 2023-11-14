#include "TitleScene.h"

void TitleScene::Initialize() {}

void TitleScene::Update() {
	if (InputManager::PreKey(DIK_SPACE)) {
		sceneNo_ = STAGE;
	}
}

void TitleScene::Draw() { Novice::DrawBox(0, 0, 1280, 720, 0.0f, 0xFFFF00FF, kFillModeSolid); }
