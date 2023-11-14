#include "PlayerBullet.h"

void PlayerBullet::Initialize(Vector2 pos) {

	pos_ = pos;
	Live = true;
}

void PlayerBullet::Update() {
	pos_.y -= speed_;

	if (pos_.y <= 0 - size_) {
		Live = false;
	}
}

void PlayerBullet::Draw() {
	if (Live == true) {
		Novice::DrawBox(
		    static_cast<int>(pos_.x), static_cast<int>(pos_.y), size_, size_, 0.0f, RED,
		    kFillModeSolid);
	}
}

void PlayerBullet::OnCollision() { Live = false; }
