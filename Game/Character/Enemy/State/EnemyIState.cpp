#include"EnemyIState.h"

int EnemyIState::stateNo_ = ALIVE;

int EnemyIState::GetStateNumber()
{
	return stateNo_;
}

