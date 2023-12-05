#pragma once
#include "ICommand.h"
class Player;
class CommandA : public ICommand {
public:
	void Exec(Player& player) override;
};