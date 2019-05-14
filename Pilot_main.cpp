#include "pilot.h"
void menus();
const int KEY_UP = 72;
const int KEY_DOWN = 80;

int main()
{
	menus();
	Pilot pilot;
	int c = false;
	while (true)
	{
		c = false;
		switch (c = getch())
		{
		case KEY_UP:
			pilot.lifting_button();
			break;
		case KEY_DOWN:
			pilot.lowering_button();
			break;
		}
	}



	return 0;
}


void menus()
{
	std::cout << "Blind lifting: Button: ARROW UP\n";
	std::cout << "Blind lowering: Button: ARROW DOWN\n";
}
