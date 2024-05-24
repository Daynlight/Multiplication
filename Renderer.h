#pragma once
#include <iostream>

class Renderer
{
public:
	Renderer();
	void PrintTitle(const char* Title);
	void PrintDef(const char* Text);
	void PrintQuestion(const char* Text);
	void GoodAnswear(const char* Text);
	void BadAnswear(const char* Text);
	void Warning(const char* Text);
	std::string GetInput();
	~Renderer();

private:
	const char* DefColor = "";
	const char* TitleColor = "";
	const char* QuestionColor = "";
	const char* GoodAnswearColor = "";
	const char* BadAnswearColor = "";
	const char* WarningColor = "";
};

