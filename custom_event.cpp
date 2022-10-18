#include "custom_event.h"
#include "event.h"
#include <iostream>

void custom_event::eve(event& ev) {
	time = std::clock();
	real_time += time - time2;
	time2 = time;
	//std::cout << CurrentFrame << std::endl;
	if (real_time > 5) {
		CurrentFrame = 1;
		real_time = 0;
	}
	else {
		CurrentFrame = 0;
	}

	if (ev.focus_botton == "boot1") {
		focus_windows = 2;
	}
	if (ev.focus_botton == "boot2") {
		focus_windows = 3;
	}
	if (ev.focus_botton == "boot3") {
		focus_windows = 4;
	}
	if (ev.focus_botton == "boot4") {
		focus_windows = 5;
	}
	if (ev.focus_botton == "boot5") {
		ev.windows_job = false;
	}
	if (ev.focus_botton == "boot6") {
		focus_windows = 1;
	}
	if (ev.focus_botton == "boot7") {
		focus_windows = 6;
		
	}


	if (ev.focus_botton == "boot11") {
		focus_windows = 10;
		active_save = 1;
	}
	if (ev.focus_botton == "boot12") {
		focus_windows = 10;
		active_save = 2;
	}
	if (ev.focus_botton == "boot13") {
		focus_windows = 10;
		active_save = 3;
	}
	if (ev.focus_botton == "boot14") {
		focus_windows = 10;
		active_save = 4;
	}
	if (ev.focus_botton == "boot15") {
		focus_windows = 10;
		active_save = 5;
	}
	if (ev.focus_botton == "boot16") {
		focus_windows = 10;
		active_save = 6;
	}
	if (ev.focus_botton == "boot17") {
		focus_windows = 10;
		active_save = 7;
	}
	if (ev.focus_botton == "boot18") {
		focus_windows = 10;
		active_save = 8;
	}
	if (ev.focus_botton == "boot19") {
		focus_windows = 10;
		active_save = 9;
	}
	if (ev.focus_botton == "boot20") {
		focus_windows = 10;
		active_save = 10;
	}

	if (ev.focus_botton == "boot32") {
		focus_windows = 11;
	}
	
	if (ev.focus_zone != "") {
		std::cout << ev.focus_zone << std::endl;
	}
	if (focus_windows == 11) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
			if (position > 0) {
				position = position - CurrentFrame;
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
			if (position < 1152) {
				position = position + CurrentFrame;
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
			if (position_y > -600) {
				position_y = position_y - CurrentFrame;
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
			if (position_y < 10) {
				position_y = position_y + CurrentFrame;
			}
		}
	}
		

};
