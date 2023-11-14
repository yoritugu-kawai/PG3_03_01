#pragma once
#include <memory>

#include "Game/Character/Enemy/Enemy.h"
#include "Game/Character/Player/Player.h "
#include "Game/InputManager/InputManager.h"
#include "IScene.h"

class TitleScene : public IScene {
public:
	~TitleScene(){};

	void Initialize() override;

	void Update() override;

	void Draw() override;

private:
};