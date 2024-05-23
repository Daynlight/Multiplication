#include "Terminal.h"

Terminal::Terminal()
{
	std::cout << DefColor;
}

void Terminal::PrintTitle(const char* Title)
{
	std::cout << TitleColor << Title << std::endl << DefColor;
}

void Terminal::PrintDef(const char* Text)
{
	std::cout << DefColor << Text << std::endl;
}

void Terminal::PrintQuestion(const char* Text)
{
	std::cout << QuestionColor << Text << DefColor;
}

void Terminal::GoodAnswear(const char* Text)
{
	std::cout << GoodAnswearColor << Text << std::endl << DefColor;
}

void Terminal::BadAnswear(const char* Text)
{
	std::cout << BadAnswearColor << Text << std::endl << DefColor;
}

void Terminal::Warning(const char* Text)
{
	std::cout << WarningColor << Text << std::endl << DefColor;
}

std::string Terminal::GetInput()
{
	std::string Temp;
	std::cin >> Temp;
	return Temp;
}

Terminal::~Terminal()
{
	Warning("Exiting Terminal\n");
}
