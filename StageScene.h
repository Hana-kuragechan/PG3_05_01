#pragma once
#include "IScene.h"
#include"Icommand.h"
#include"Player.h"
#include"InputHandler.h"
class StageScene:public IScene
{
private:
	InputHandler* inputHandler_ = nullptr;
	Icommand* iCommand_ = nullptr;
	Player* player_;

public:
	StageScene();
	void Init()override;
	void Update()override;
	void Draw()override;
};

