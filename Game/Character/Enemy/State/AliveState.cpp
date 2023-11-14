#include "AliveState.h"

void AliveState::Initialize()
{

}

void AliveState::Update(Enemy* enemy)
{
	Vector2 pos = enemy->GetPos();
	pos.x += speed_;
	if (pos.x <= moveMin_ || pos.x >= moveMax_)
	{
		speed_ = speed_ * -1;
	}

	if (!enemy->GetIsAlive())
	{
		stateNo_ = DEATH;
	}

	enemy->SetPos(pos);
}