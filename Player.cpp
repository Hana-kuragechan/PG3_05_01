#include "Player.h"
#include<Novice.h>
Player::Player()
{
}
void Player::Iint()
{
	posX_ = 100;
	posY_ = 100;
	speedX_ = 5;
	radius_ = 30;
}
void Player::Update()
{
	/*MoveRight();
	MoveLeft();*/
}
void Player::Draw()
{
	Novice::DrawBox(posX_, posY_, radius_, radius_, 0.0f, WHITE, kFillModeSolid);
}
void Player::MoveRight() {
	this->posX_ += this->speedX_;
}
void Player::MoveLeft() {
	this->posX_ -= this->speedX_;
}
