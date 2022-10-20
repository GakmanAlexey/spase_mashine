#include "date_base_snar_img.h"

void date_base_snar_img::select(int id) {
	if (id == 1) {
		active_x = 0;
		active_y = 0;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 2) {
		active_x = 0;
		active_y = 32;
		active_w = 16;
		active_h = 16;
	}
};