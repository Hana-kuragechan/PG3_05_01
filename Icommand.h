#pragma once
#include <Player.h>
class Icommand
{
public:
	virtual ~Icommand();
	virtual void Exec(Player& player) = 0;
};
class MoveRightCommand :public Icommand {
public:
	void Exec(Player& player)override;
};

class MoveLeftCommand :public Icommand {
public:
	void Exec(Player& player)override;
};

