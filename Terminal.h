#pragma once
#include <iostream>

class Terminal
{
public:
	Terminal();
	void PrintTitle(const char* Title);
	void PrintDef(const char* Text);
	void PrintQuestion(const char* Text);
	void GoodAnswear(const char* Text);
	void BadAnswear(const char* Text);
	void Warning(const char* Text);
	std::string GetInput();
	~Terminal();

private:
	const char* DefColor = "\033[37m";
	const char* TitleColor = "\033[32m";
	const char* QuestionColor = "\033[34m";
	const char* GoodAnswearColor = "\033[32m";
	const char* BadAnswearColor = "\033[31m";
	const char* WarningColor = "\033[33m";
};

