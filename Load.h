#pragma once
#include <SFML/Graphics.hpp>
#include "CFG.h"
using namespace sf;
class Load
{
public:
	CFG cfg;

	Font base_font;
	Font ustroke_font;

	Image Img_fonL;
	Texture Texturs_fonL;

	Image Img_fonB;
	Texture Texturs_fonB;

	Image Img_fonG;
	Texture Texturs_fonG;


	Image Img_fon_select_game;
	Texture Texturs_fon_select_game;
	Image Img_bottom_select_game;
	Texture Texturs_bottom_select_game;
	Image Img_airLiners;
	Texture Texturs_airLiners;


	void font();
	void img();
	void texturs();
};
