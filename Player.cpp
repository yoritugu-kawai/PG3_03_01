#include "Player.h"

void Player::Initiluze() { 
	pos_.x = 300;
	pos_.y = 300;
	speed_=2;

}

void Player::Draw() { Novice::DrawBox(pos_.x, pos_.y, 50, 50, 0.0f, RED, kFillModeSolid); }

void Player::MoveRight() { pos_.x += speed_; }

void Player::MoveLeft() { pos_.y += speed_; }
