#pragma once
#include "Game/State/IScene.h"
#include <Novice.h>
class StageScene : public IScene {

	void Initialize() override;
	void Update() override;
	void Draw() override;

};
