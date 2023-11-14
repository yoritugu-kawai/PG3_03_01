#pragma once
#include "Vector2.h"
#include <Novice.h>
#include <memory>

#include "state/AliveState.h"
#include "state/EnemyIState.h"

class Enemy {
public:
	void Initialize();

	void Update();

	void Draw();

	void OnCollision();

	Vector2 GetPos() { return pos_; }

	int GetSize() { return size_; }

	bool GetIsAlive() { return isAlive_; }

	void SetPos(Vector2 pos) { pos_ = pos; }

private:
	Vector2 pos_{};
	int size_ = 32;

	std::unique_ptr<EnemyIState> state_[2] = {};

	int currentStateNo_{};
	int prevStateNo_{};

	bool isAlive_ = true;
};