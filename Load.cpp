#include "Load.h"
#include <SFML/Graphics.hpp>
#include <vector>

#include "CFG.h"

void Load::font() {
	base_font.loadFromFile(cfg.direct_root + cfg.direct_font + "f.otf");
	ustroke_font.loadFromFile(cfg.direct_root + cfg.direct_font + "ustroke.ttf");
};
void Load::img() {
	Img_fonL.loadFromFile(cfg.direct_root + cfg.direct_img + "fon1.png");
	Img_fonB.loadFromFile(cfg.direct_root + cfg.direct_img + "fon_botton1.png");
	Img_fonG.loadFromFile(cfg.direct_root + cfg.direct_img + "fon_game.png");

};
void Load::texturs() {
	Texturs_fonL.loadFromImage(Img_fonL);
	Texturs_fonB.loadFromImage(Img_fonB);
	Texturs_fonG.loadFromImage(Img_fonG);
};


