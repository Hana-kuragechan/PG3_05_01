#include "ClearScene.h"
#include <Novice.h>
void ClearScene::Init()
{
}
void ClearScene::Update()
{
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);

	if (preKeys[DIK_T] == 0 && keys[DIK_T]) {
		sceneNo = TITLE;
	}
}

void ClearScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, WHITE,kFillModeSolid);
}
