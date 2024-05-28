#include "Stats.h"

Stats::Stats()
{
}

void Stats::AddCorrectAnswear()
{
	Correct++;
}

Stats::~Stats()
{
	std::string Tekst = "Poprawnych odpowiedzi: " + std::to_string(Correct);
	Console.Warning(Tekst.c_str());
}
