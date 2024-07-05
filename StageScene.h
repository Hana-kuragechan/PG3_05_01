#pragma once
#include"IScene.h"
#include "Player.h"
#include "Enemy.h"
class StageScene:public IScene
{
	public:
	void Init()override;
	void Update()override;
	void Draw()override;

private:
	Player* player;
	Enemy* enemy;
};

