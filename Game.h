#pragma once
#include "Renderer.h"
#include <string>
#include <random>
#include <Windows.h>

class Game
{
public:
	Game();
	void Loop(int Level);
	~Game();

private:
	Renderer Console = Renderer();
	int Random(int Level);
};

