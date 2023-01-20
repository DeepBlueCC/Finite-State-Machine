#include <iostream>
#include "MainMenu.h"
#include "Options.h"

State* State::mainMenu = new MainMenu();
State* State::options = new Options();
State* State::current = State::mainMenu;


int main(int argc, char** argv)
{
	while (true)
	{
		State::current->enter();
		State::current->update();
	}

	return 0;
}