#pragma once
#include "Renderer.h"
#include <string>

class Stats
{
public:
	Stats();
	void AddCorrectAnswear();
	~Stats();
private:
	int Correct = 0;
	Renderer Console = Renderer();
};

