#include "Options.h"

Options::Options() {}
Options::~Options() {}

void Options::enter()
{
	std::cout << "Options:\n";
}

void Options::update()
{
	while (true)
	{
		std::cout << "1. Main Menu\n" <<
			"2. Exit\n";
		std::cout << ">> ";			// prompt for command
		int num;
		std::cin >> num;
		switch (num)
		{
		case 1:
			leave();		// clear memory, stop music, etc...
			current = mainMenu;
			return;
		case 2:
			exit(0);
		}
	}
}

void Options::leave()
{
	std::cout << "**Leaving Options\n\n";
}