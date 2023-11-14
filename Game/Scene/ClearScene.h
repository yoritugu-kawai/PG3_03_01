#pragma once
#include "Game/State/IScene.h"
#include <Novice.h>
class ClearScene : public IScene {
public:
	void Initialize() override;
	void Update() override;
	void Draw() override;

private:
};
