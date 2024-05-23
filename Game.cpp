#include "Game.h"

Game::Game()
{
}

void Game::Loop(int Level)
{
	std::string Answear = "";
	Console.Warning("To Exit Just Type 'Exit'");
	while (Answear != "Exit") {
		int A = Random(Level);
		int B = Random(Level);
		int AnswearInt = 0;

		while (AnswearInt != (A * B) and Answear != "Exit") {

			Console.PrintQuestion((std::to_string(A) + " * " + std::to_string(B) + " = ").c_str());

			Answear = Console.GetInput();

			try {
				for (char ch : Answear) {
					int v = ch;
					if (!(ch >= 48 && ch <= 57)) {
						throw Answear;
					}
				}
				AnswearInt = std::stoi(Answear);

				if(AnswearInt != (A * B)) Console.BadAnswear("This is bad Answear Try Again");
				else Console.GoodAnswear("This is Good Answear");
			}
			catch (std::string TryAnswear)
			{
				std::string ErrMessage = TryAnswear + " is not a number";
				Console.Warning(ErrMessage.c_str());
			}
		}
	}
}

Game::~Game()
{
}

int Game::Random(int Level)
{
	std::random_device rd; // obtain a random number from hardware
	std::mt19937 gen(rd()); // seed the generator
	std::uniform_int_distribution<> distr(1, Level * 10); // define the range

	return distr(gen);
}
