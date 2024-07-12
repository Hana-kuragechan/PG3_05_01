#include "InputHandler.h"
#include<Novice.h>
Icommand* InputHandler::HandleInput()
{
	if (Novice::CheckHitKey(DIK_D)) {
		return preesKeyD_;
	}
	if (Novice::CheckHitKey(DIK_A)) {
		return preesKeyA_;
	}
	return nullptr;
}

void InputHandler::AssignMoveLeftCommand2PressKeyA()
{
	Icommand* command = new MoveLeftCommand();
	this->preesKeyA_ = command;
}

void InputHandler::AssignMoveRightCommand2PressKeyD()
{
	Icommand* command = new MoveRightCommand();
	this->preesKeyD_ = command;
}
