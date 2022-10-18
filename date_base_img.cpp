#include "date_base_img.h"
#include <SFML/Graphics.hpp>


void date_base_img::load_bd() {

};
void date_base_img::select(int id) {
	if (id == 1) {
		active_x = 0;
		active_y = 0;
		active_w = 128;
		active_h = 128;
		Textur = lo.Texturs_matrix_liners;
	}
	else if (id == 2) {
		active_x = 128;
		active_y = 0;
		active_w = 128;
		active_h = 128;
		Textur = lo.Texturs_matrix_liners;
	}
	else if (id == 3) {
		active_x = 256;
		active_y = 0;
		active_w = 128;
		active_h = 128;
		Textur = lo.Texturs_matrix_liners;
	}
	else if (id == 4) {
		active_x = 386;
		active_y = 0;
		active_w = 128;
		active_h = 128;
		Textur = lo.Texturs_matrix_liners;
	}
	else if (id == 5) {
		active_x = 512;
		active_y = 0;
		active_w = 128;
		active_h = 128;
		Textur = lo.Texturs_matrix_liners;
	}
	else if (id == 6) {
		active_x = 640;
		active_y = 0;
		active_w = 128;
		active_h = 128;
		Textur = lo.Texturs_matrix_liners;
	}
	else if (id == 7) {
		active_x = 768;
		active_y = 0;
		active_w = 128;
		active_h = 128;
		Textur = lo.Texturs_matrix_liners;
	}
	else if (id == 8) {
		active_x = 896;
		active_y = 0;
		active_w = 128;
		active_h = 128;
		Textur = lo.Texturs_matrix_liners;
	}
	else if (id == 9) {
		active_x = 1024;
		active_y = 0;
		active_w = 128;
		active_h = 128;
		Textur = lo.Texturs_matrix_liners;
	}
	else if (id == 10) {
		active_x = 1152;
		active_y = 0;
		active_w = 128;
		active_h = 128;
		Textur = lo.Texturs_matrix_liners;
	}










	else if (id == 11) {
		active_x = 16;
		active_y = 0;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 12) {
		active_x = 48;
		active_y = 0;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 13) {
		active_x = 80;
		active_y = 0;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 14) {
		active_x = 112;
		active_y = 0;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 15) {
		active_x = 144;
		active_y = 0;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 16) {
		active_x = 176;
		active_y = 0;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 17) {
		active_x = 208;
		active_y = 0;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 18) {
		active_x = 240;
		active_y = 0;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 19) {
		active_x = 272;
		active_y = 0;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 20) {
		active_x = 304;
		active_y = 0;
		active_w = 16;
		active_h = 16;
	}
};