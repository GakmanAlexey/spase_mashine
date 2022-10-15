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
	Img_fon_select_game.loadFromFile(cfg.direct_root + cfg.direct_img + "fon_select_liner.png");
	Img_bottom_select_game.loadFromFile(cfg.direct_root + cfg.direct_img + "botom_select_liner.png");
	Img_airLiners.loadFromFile(cfg.direct_root + cfg.direct_img + "liner.png");


};
void Load::texturs() {
	Texturs_fonL.loadFromImage(Img_fonL);
	Texturs_fonB.loadFromImage(Img_fonB);
	Texturs_fonG.loadFromImage(Img_fonG);
	Texturs_fon_select_game.loadFromImage(Img_fon_select_game);
	Texturs_bottom_select_game.loadFromImage(Img_bottom_select_game);
	Texturs_airLiners.loadFromImage(Img_airLiners);
};
