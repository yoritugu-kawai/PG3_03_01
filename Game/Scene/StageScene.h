#pragma once
#include <memory>

#include"IScene.h"
#include"Game/Character/Player/Player.h"
#include"Game/Character/Enemy/Enemy.h"

class StageScene:public IScene
{
public:

	~StageScene() {};

	void Initialize()override;

	void Update()override;

	void Draw()override;


private:

	void CheckCollision();

	bool Collision(Vector2 p1,int s1,Vector2 p2,int s2);

	std::unique_ptr<Player>player_ = nullptr;
	std::unique_ptr<Enemy>enemy_ = nullptr;
};