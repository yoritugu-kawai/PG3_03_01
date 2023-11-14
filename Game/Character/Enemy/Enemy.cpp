#include "Enemy.h"

void Enemy::Initialize() {
	pos_ = {300, 200};

	state_[ALIVE] = std::make_unique<AliveState>();

	currentStateNo_ = ALIVE;
	state_[currentStateNo_]->Initialize();
}

void Enemy::Update() {
	prevStateNo_ = currentStateNo_;
	currentStateNo_ = state_[currentStateNo_]->GetStateNumber();

	if (prevStateNo_ != currentStateNo_) {
		state_[currentStateNo_]->Initialize();
	}

	state_[currentStateNo_]->Update(this);
}

void Enemy::Draw() {
	Novice::DrawBox(
	    static_cast<int>(pos_.x), static_cast<int>(pos_.y), size_, size_, 0.0f, BLUE,
	    kFillModeSolid);
}

void Enemy::OnCollision() { isAlive_ = false; }
