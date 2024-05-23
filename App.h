#pragma once
#include <string>
#include "Terminal.h"
#include "Game.h"

class App
{
public: 
	App();
	void Loop();
	~App();
private:
	int Level = 1;

	Terminal Console = Terminal();
	Game AppGame = Game();
};

