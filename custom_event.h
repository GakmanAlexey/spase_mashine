#pragma once
#include "event.h"
class custom_event
{
public:
	int focus_windows = 1;
	int active_save = 0;
	void eve(event& ev);
};

