#include "pilot.h"

void Pilot::lifting_button()
{
	const int MAX_LIFT = 100;

		do
		{
			std::cout << ">>Blind lifting<<" << std::endl;
			lvl++;
			std::cout << lvl;
			Sleep(80);
			system("cls");
		}
		while (lvl < MAX_LIFT);

			std::cout << lvl << std::endl;
			if (lvl == MAX_LIFT)
				std::cout << "engine stop" << std::endl;
}


void Pilot::lowering_button()
{
	const int MIN_LIFT = 0;

	for (int i = lvl; i > MIN_LIFT; i--)
		{
			std::cout << ">>Blind lowering<<" << std::endl;
			lvl--;
			std::cout << lvl;
			Sleep(80);
			system("cls");
		}

			std::cout << lvl << std::endl;
			if (lvl == MIN_LIFT)
				std::cout << "engine stop" << std::endl;
}


