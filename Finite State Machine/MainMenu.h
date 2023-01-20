#pragma once
#include "State.h"

class MainMenu : public State
{
public:
	MainMenu();
	~MainMenu();

	void enter();
	void update();
	void leave();
};

