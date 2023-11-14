#pragma once
enum SCENE {TITLE,STAAGE,CLEAR};
class IScene {
protected:
	static int sceneNo;
public:
	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual ~IScene();

	int GetSceneNo();

private:
};
