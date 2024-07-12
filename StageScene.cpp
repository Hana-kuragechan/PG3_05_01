#include "StageScene.h"

StageScene::StageScene()
{
}

void StageScene::Init()
{
	inputHandler_ = new InputHandler();
	inputHandler_->AssignMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	player_ = new Player();
}

void StageScene::Update()
{
	iCommand_ = inputHandler_->HandleInput();
	if (this->iCommand_) {
		iCommand_->Exec(*player_);
	}
	player_->Update();
	player_->Draw();
}

void StageScene::Draw()
{
}
