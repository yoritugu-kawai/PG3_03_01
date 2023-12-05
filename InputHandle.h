#pragma once
#include "ICommand.h"
#include "CommandA.h"
#include "CommandD.h"
class InputHandler {
public:
	ICommand* HandleInput(char* keys);

	
	void AssignMoveLeftCommandToPressKeyA();

	void AssignMoveRightCommandToPressKeyD();
	

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;
	
};
