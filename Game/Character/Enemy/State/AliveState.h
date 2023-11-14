#pragma once
#include "../Enemy.h"
#include "EnemyIState.h"

class AliveState : public EnemyIState {
public:
	void Initialize() override;

	void Update(Enemy* enemy) override;

private:
	const float moveMax_ = 1100.0f;
	const float moveMin_ = 100.0f;

	float speed_ = 5.0f;
};