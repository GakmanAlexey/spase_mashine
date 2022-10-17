#include "date_base_img.h"
#include <SFML/Graphics.hpp>


void date_base_img::load_bd() {

};
void date_base_img::select(int id) {
	if (id == 1) {
		active_x = 0;
		active_y = 0;
		active_w = 0;
		active_h = 0;
		Textur = lo.Texturs_airLiners;
	}
};