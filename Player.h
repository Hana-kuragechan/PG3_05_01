#pragma once
class Player
{
private:
	int posX_;
	int posY_;
	int speedX_;
	int radius_;
public:
	Player();
	void Iint();
	void Update();
	void Draw();

	void MoveRight();
	void MoveLeft();
};

