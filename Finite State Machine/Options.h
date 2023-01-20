#pragma once
#include "State.h"

class Options: public State
{
public:
	Options();
	~Options();

	void enter();
	void update();
	void leave();
};

