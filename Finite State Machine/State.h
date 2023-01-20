#pragma once
#include <iostream>

class State
{
public:
	State();
	~State();

	virtual void enter() = 0;
	virtual void update() = 0;
	virtual void leave() = 0;

	static State* current, * mainMenu, * options; // loadGame, credits....

};

