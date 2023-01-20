#include "MainMenu.h"

MainMenu::MainMenu() {}
MainMenu::~MainMenu() {}

void MainMenu::enter()
{
	std::cout << "Main Menu:\n";
}

void MainMenu::update()
{
	while (true)
	{
		std::cout << "1. Options\n" <<
			"2. Exit\n";
		std::cout << ">> ";			// prompt for command
		int num;
		std::cin >> num;
		switch (num)
		{
		case 1:
			leave();		// clear memory, stop music, etc...
			current = options;
			return;
		case 2:
			exit(0);
		}
	}
}

void MainMenu::leave()
{
	std::cout << "**Leaving Main Menu\n\n";
}
