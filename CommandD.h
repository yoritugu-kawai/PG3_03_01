#pragma once
#include"ICommand.h"
class Player;
class CommandD : public ICommand {
public:
	void Exec(Player& player) override;
};