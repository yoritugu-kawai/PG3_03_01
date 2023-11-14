#pragma once

enum ENEMYSTATE { ALIVE, DEATH };

class Enemy;
class EnemyIState {
public:
	virtual ~EnemyIState(){};

	virtual void Initialize() = 0;

	virtual void Update(Enemy* enemy) = 0;

	int GetStateNumber();

protected:
	static int stateNo_;
};
