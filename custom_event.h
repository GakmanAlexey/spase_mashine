#pragma once

#include <SFML/Graphics.hpp>
#include "event.h"
class custom_event
{
public:
	int focus_windows = 1;
	int active_save = 0;
	int position = 576;
	int position_y = 0;
	void eve(event& ev);
	sf::Clock clock;
	int CurrentFrame;
	int time;
	int time2;
	float real_time = 0;

	clock_t current_ticks, delta_ticks;
	clock_t fps = 0;
};

