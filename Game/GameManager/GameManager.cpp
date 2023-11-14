#include "GameManager.h"

GameManager::GameManager() {
	Novice::Initialize(kWindowTitle, 1280, 720);
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<StageScene>();
	sceneArr_[CLEAR] = std::make_unique<GameClearScene>();

	currentSceneNo_ = TITLE;
	sceneArr_[currentSceneNo_]->Initialize();
}

GameManager::~GameManager() { Novice::Finalize(); }

int GameManager::Run() {
	while (Novice::ProcessMessage() == 0) {
		Novice::BeginFrame();
		InputManager::BeginFlame();

		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetNumber();

		if (prevSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Initialize();
		}

		sceneArr_[currentSceneNo_]->Update();

		sceneArr_[currentSceneNo_]->Draw();

		Novice::EndFrame();

		if (InputManager::PreKey(DIK_ESCAPE)) {
			break;
		}
	}
	return 0;
}