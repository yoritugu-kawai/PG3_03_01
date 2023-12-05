#include "InputHandle.h"

ICommand* InputHandler::HandleInput(char* keys) {
	if (keys[DIK_D]) {
		return pressKeyD_;
	}
	if (keys[DIK_A]) {
		return pressKeyA_;
	}
	return nullptr;
}

void InputHandler::AssignMoveLeftCommandToPressKeyA() {
	ICommand* command = new CommandA();
	this->pressKeyA_ = command;
}

void InputHandler::AssignMoveRightCommandToPressKeyD() {
	ICommand* command = new CommandD();
	this->pressKeyD_ = command;
}


