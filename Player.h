#pragma once
#include<Novice.h>
#include<Bullet.h>

class Player
{
public:

	Player(int posX, int posY, int speedX, int speedY, bool isAlive);
	~Player();

	void Update(char* keys);
	void Draw();
	Bullet* bullet_;

	int GetPosX() { return posX_; };
	int GetPosY() { return posY_; };
	int GetSpeedX() { return speedX_; };
	int GetSpeedYX() { return speedX_; };
	int GetRadius() { return radius_; };
	int GetIsAive() { return isAlive_; };

	void SetSpeedX(int speedX) { speedX_ = speedX; };
	void SetSpeedY(int speedY) { speedY_ = speedY; };
	void SetIsAlive(bool isAlive) { isAlive_ = isAlive; }

private:
	int posX_;
	int posY_;
	int speedX_;
	int speedY_;
	int radius_;
	bool isAlive_;
};

