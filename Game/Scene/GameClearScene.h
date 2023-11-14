#pragma once
#include <memory>

#include "Game/InputManager/InputManager.h"
#include "IScene.h"

class GameClearScene : public IScene {
public:
	void Initialize() override;

	void Update() override;

	void Draw() override;

private:
};