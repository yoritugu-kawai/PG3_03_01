#include "StageScene.h"

void StageScene::Initialize() {
	player_ = std::make_unique<Player>();
	player_->Initialize();
	enemy_ = std::make_unique<Enemy>();
	enemy_->Initialize();
}

void StageScene::Update() {

	player_->Update();
	enemy_->Update();
	CheckCollision();
	if (!enemy_->GetIsAlive()) {
		sceneNo_ = CLEAR;
	}
}

void StageScene::Draw() {
	player_->Draw();
	enemy_->Draw();
}

void StageScene::CheckCollision() {
	PlayerBullet* bullet = player_->GetBullet();

	if (Collision(bullet->GetPos(), bullet->GetSize(), enemy_->GetPos(), enemy_->GetSize())) {
		enemy_->OnCollision();
		bullet->OnCollision();
	}
}

bool StageScene::Collision(Vector2 p1, int s1, Vector2 p2, int s2) {
	if (p1.x <= p2.x + s2 && p2.x <= p1.x + s1) {
		if (p1.y <= p2.y + s2 && p2.y <= p1.y + s1) {
			return true;
		}
	}
	return false;
}
