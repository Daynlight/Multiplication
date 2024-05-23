#pragma once
#include "Terminal.h"
#include <string>
#include <random>

class Game
{
public:
	Game();
	void Loop(int Level);
	~Game();

private:
	Terminal Console = Terminal();
	int Random(int Level);
};

