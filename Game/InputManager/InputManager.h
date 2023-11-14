#pragma once
#include <Novice.h>
#include <format>

class InputManager {
public:
	static InputManager* GetInstance();

	static void BeginFlame();

	/// <summary>
	/// 押した瞬間
	/// </summary>
	static bool PreKey(uint32_t key);

	/// <summary>
	/// 押し続ける
	/// </summary>
	static bool Key(uint32_t key);

private:
	char keys[256] = {0};
	char preKeys[256] = {0};
};