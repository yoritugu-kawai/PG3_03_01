#pragma once
#include "Vector2.h"
#include <Novice.h>

class PlayerBullet {
public:
	void Initialize(Vector2 pos);
	void Update();
	void Draw();
	void OnCollision();
	Vector2 GetPos() { return pos_; }
	int GetSize() { return size_; }

private:
	Vector2 pos_{0, -64.0f};
	int size_ = 16;
	float speed_ = 10.0f;

	bool Live = false;
};