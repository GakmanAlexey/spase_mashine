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
		active_x = 0;
		active_y = 16;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 12) {
		active_x = 0;
		active_y = 48;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 13) {
		active_x = 0;
		active_y = 80;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 14) {
		active_x = 0;
		active_y = 112;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 15) {
		active_x = 0;
		active_y = 144;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 16) {
		active_x = 0;
		active_y = 176;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 17) {
		active_x = 0;
		active_y = 208;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 18) {
		active_x = 0;
		active_y = 240;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 19) {
		active_x = 0;
		active_y = 272;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 20) {
		active_x = 0;
		active_y = 304;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 21) {
		active_x = 16;
		active_y = 16;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 22) {
		active_x = 16;
		active_y = 48;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 23) {
		active_x = 16;
		active_y = 80;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 24) {
		active_x = 16;
		active_y = 112;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 25) {
		active_x = 16;
		active_y = 144;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 26) {
		active_x = 16;
		active_y = 176;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 27) {
		active_x = 16;
		active_y = 208;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 28) {
		active_x = 16;
		active_y = 240;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 29) {
		active_x = 16;
		active_y = 272;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 30) {
		active_x = 16;
		active_y = 304;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 31) {
		active_x = 32;
		active_y = 16;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 32) {
		active_x = 32;
		active_y = 48;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 33) {
		active_x = 32;
		active_y = 80;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 34) {
		active_x = 32;
		active_y = 112;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 35) {
		active_x = 32;
		active_y = 144;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 36) {
		active_x = 32;
		active_y = 176;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 37) {
		active_x = 32;
		active_y = 208;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 38) {
		active_x = 32;
		active_y = 240;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 39) {
		active_x = 32;
		active_y = 272;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 40) {
		active_x = 32;
		active_y = 304;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 41) {
		active_x = 48;
		active_y = 16;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 42) {
		active_x = 48;
		active_y = 48;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 43) {
		active_x = 48;
		active_y = 80;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 44) {
		active_x = 48;
		active_y = 112;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 45) {
		active_x = 48;
		active_y = 144;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 46) {
		active_x = 48;
		active_y = 176;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 47) {
		active_x = 48;
		active_y = 208;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 48) {
		active_x = 48;
		active_y = 240;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 49) {
		active_x = 48;
		active_y = 272;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 50) {
		active_x = 48;
		active_y = 304;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 51) {
		active_x = 64;
		active_y = 16;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 52) {
		active_x = 64;
		active_y = 48;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 53) {
		active_x = 64;
		active_y = 80;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 54) {
		active_x = 64;
		active_y = 112;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 55) {
		active_x = 64;
		active_y = 144;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 56) {
		active_x = 64;
		active_y = 176;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 57) {
		active_x = 64;
		active_y = 208;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 58) {
		active_x = 64;
		active_y = 240;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 59) {
		active_x = 64;
		active_y = 272;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 60) {
		active_x = 64;
		active_y = 304;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 61) {
		active_x = 80;
		active_y = 16;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 62) {
		active_x = 80;
		active_y = 48;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 63) {
		active_x = 80;
		active_y = 80;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 64) {
		active_x = 80;
		active_y = 112;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 65) {
		active_x = 80;
		active_y = 144;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 66) {
		active_x = 80;
		active_y = 176;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 67) {
		active_x = 80;
		active_y = 208;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 68) {
		active_x = 80;
		active_y = 240;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 69) {
		active_x = 80;
		active_y = 272;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 70) {
		active_x = 80;
		active_y = 304;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 71) {
		active_x = 96;
		active_y = 16;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 72) {
		active_x = 96;
		active_y = 48;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 73) {
		active_x = 96;
		active_y = 80;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 74) {
		active_x = 96;
		active_y = 112;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 75) {
		active_x = 96;
		active_y = 144;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 76) {
		active_x = 96;
		active_y = 176;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 77) {
		active_x = 96;
		active_y = 208;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 78) {
		active_x = 96;
		active_y = 240;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 79) {
		active_x = 96;
		active_y = 272;
		active_w = 16;
		active_h = 16;
	}
	else if (id == 80) {
		active_x = 96;
		active_y = 304;
		active_w = 16;
		active_h = 16;
	}
};