#include "Renderer.h"

Renderer::Renderer()
{
	std::cout << DefColor;
}

void Renderer::PrintTitle(const char* Title)
{
	std::cout << TitleColor << Title << std::endl << DefColor;
}

void Renderer::PrintDef(const char* Text)
{
	std::cout << DefColor << Text << std::endl;
}

void Renderer::PrintQuestion(const char* Text)
{
	std::cout << QuestionColor << Text << DefColor;
}

void Renderer::GoodAnswear(const char* Text)
{
	std::cout << GoodAnswearColor << Text << std::endl << DefColor;
}

void Renderer::BadAnswear(const char* Text)
{
	std::cout << BadAnswearColor << Text << std::endl << DefColor;
}

void Renderer::Warning(const char* Text)
{
	std::cout << WarningColor << Text << std::endl << DefColor;
}

std::string Renderer::GetInput()
{
	std::string Temp;
	std::cin >> Temp;
	return Temp;
}

Renderer::~Renderer()
{
}
