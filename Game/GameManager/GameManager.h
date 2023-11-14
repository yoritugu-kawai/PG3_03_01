#pragma once
#include "Game/InputManager/InputManager.h"
#include <Novice.h>

#include "Game/Scene/GameClearScene.h"
#include "Game/Scene/StageScene.h"
#include "Game/Scene/TitleScene.h"

const char kWindowTitle[] = "PG3";

class GameManager {
public:
	GameManager();
	~GameManager();

	int Run();

private:
	std::unique_ptr<IScene> sceneArr_[3] = {};

	int currentSceneNo_{};
	int prevSceneNo_{};
};