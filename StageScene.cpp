#include "StageScene.h"

void StageScene::Init()
{
	player = new Player(300, 300, 5, 5, true);
	enemy = new Enemy(500, 100, 5, true);

}

void StageScene::Update()
{
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);
	player->Update(keys);
	enemy->Update();

	float distX = float(player->bullet_->GetPosX() - enemy->GetPosX());
	float distY = float(player->bullet_->GetPosY() - enemy->GetPosY());
	float dist = (distX * distX) + (distY * distY);
	int radius = player->bullet_->GetRadius() + enemy->GetRadius();

	if (dist <= radius * radius) {
		enemy->SetIsAlive(false);
		sceneNo = CLEAR;
	}

	float distanceX = float(player->GetPosX() - enemy->GetPosX());
	float distanceY = float(player->GetPosY() - enemy->GetPosY());
	float distance = (distanceX * distanceX) + (distanceY * distanceY);
	int rad = player->GetRadius() + enemy->GetRadius();

	if (distance <= rad * rad) {
		player->SetIsAlive(false);

	}

	if (player->GetIsAive() == false) {
		if (keys[DIK_R] && !preKeys[DIK_R]) {
			player->SetIsAlive(true);
		}
	}
	
}

void StageScene::Draw()
{
	player->Draw();
	enemy->Draw();
}
