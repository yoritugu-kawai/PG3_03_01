#pragma once
#include<Novice.h>
struct Vecter2 {
	int x;
	int y;
};
	class Player 
{
public:
	void Initiluze();
	void Draw();
	void MoveRight();
	void MoveLeft();

private:
	Vecter2 pos_;
	int speed_;

};