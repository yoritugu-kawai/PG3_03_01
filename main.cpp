#include "Game/GameManager/GameManager.h"

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	GameManager* gameManager_ = new GameManager();
	gameManager_->Run();
	delete gameManager_;
	return 0;
}
