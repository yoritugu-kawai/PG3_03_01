#include "Player.h"

void Player::Initialize() {
	bullet_ = new PlayerBullet;

	pos_ = {600.0f, 400.0f};
	size_ = 32;
	speed_ = 10;
}

void Player::Update() {
	// AWDS
	if (InputManager::Key(DIK_W)) {
		pos_.y -= speed_;
	}
	if (InputManager::Key(DIK_S)) {
		pos_.y += speed_;
	}
	if (InputManager::Key(DIK_D)) {
		pos_.x += speed_;
	}
	if (InputManager::Key(DIK_A)) {
		pos_.x -= speed_;
	}

	// 上下
	if (InputManager::Key(DIK_UP)) {
		pos_.y -= speed_;
	}
	if (InputManager::Key(DIK_DOWN)) {
		pos_.y += speed_;
	}

	if (InputManager::Key(DIK_RIGHT)) {
		pos_.x += speed_;
	}
	if (InputManager::Key(DIK_LEFT)) {
		pos_.x -= speed_;
	}
	// 弾
	if (InputManager::PreKey(DIK_SPACE)) {
		Attack();
	}

	bullet_->Update();
}

void Player::Draw() {
	bullet_->Draw();
	Novice::DrawBox(
	    static_cast<int>(pos_.x), static_cast<int>(pos_.y), size_, size_, 0.0f, RED,
	    kFillModeSolid);
}

void Player::Attack() { bullet_->Initialize(pos_); }
