#include "App.h"

App::App()
{
	const char* Title =
		"    /|    //| | \n"
		"   //|   // | |             // __  ___ ( )  ___     // ( )  ___      ___    __  ___ ( )  ___       __    \n"
		"  // |  //  | |   //   / / //   / /   / / //   ) ) // / / //   ) ) //   ) )  / /   / / //   ) ) //   ) ) \n"
		" //  | //   | |  //   / / //   / /   / / //___/ / // / / //       //   / /  / /   / / //   / / //   / /  \n"
		"//   |//    | | ((___( ( //   / /   / / //       // / / ((____   ((___( (  / /   / / ((___/ / //   / /   \n";

	Console.PrintTitle(Title);

	Loop();
}

void App::Loop()
{
	std::string UserInput = "";

	while (UserInput != "3")
	{
		Console.Warning(("Current Level is " + std::to_string(Level)).c_str());
		Console.Warning(("Note multiplications is to 10 * Level Currently is " + std::to_string(Level * 10)).c_str());
		Console.PrintDef("1. Play Game");
		Console.PrintDef("2. Level");
		Console.PrintDef("3. Exit");

		UserInput = Console.GetInput().c_str();
		if (UserInput == "1") AppGame.Loop(Level);
		if (UserInput == "2") {
			Console.PrintQuestion("Input Level: ");
			std::string LevelInput = Console.GetInput();

			try {
				for (char ch : LevelInput) {
					int v = ch;
					if (!(ch >= 48 && ch <= 57)) {
						throw ch;
					}
				}

				Level = std::stoi(LevelInput);
			}
			catch (char TryLevel)
			{
				std::string ErrMessage = LevelInput + " is not a number";
				Console.Warning(ErrMessage.c_str());
			}
		}
	}
}

App::~App()
{
}
