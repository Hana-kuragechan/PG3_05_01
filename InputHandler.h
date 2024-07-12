#pragma once
#include <Icommand.h>
class InputHandler
{
public:
	Icommand* HandleInput();
	void AssignMoveLeftCommand2PressKeyA();
	void AssignMoveRightCommand2PressKeyD();
private:
	Icommand* preesKeyD_;
	Icommand* preesKeyA_;
};

