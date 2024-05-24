#pragma once
#include <string>
#include "Renderer.h"
#include "Game.h"

class App
{
public: 
	App();
	void Loop();
	~App();
private:
	int Level = 1;

	Renderer Console = Renderer();
	Game AppGame = Game();
};

