#pragma once
#include "Bullet/PlayerBullet.h"
#include "Game/InputManager/InputManager.h"
#include "ImGuiManager.h"
#include "Novice.h"
#include "Vector2.h"

class Player {
public:
	void Initialize();
	void Update();
	void Draw();
	Vector2 GetPos() { return pos_; }
	int GetSize() { return size_; }
	PlayerBullet* GetBullet() { return bullet_; }

private:
	void Attack();
	Vector2 pos_;
	int size_;
	int speed_;
	PlayerBullet* bullet_ = nullptr;
};