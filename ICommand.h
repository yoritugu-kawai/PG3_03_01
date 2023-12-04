#pragma once
#include"Player.h"
class Player;
class ICommand {
public:
	virtual void Exec(Player& player) = 0;
	

private:

};
