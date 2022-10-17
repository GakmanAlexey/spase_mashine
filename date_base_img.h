#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Load.h"

class date_base_img
{
public:
	Load lo;
	int active_x = 0;
	int active_y = 0;
	int active_w = 0;
	int active_h = 0;
	sf::Texture Textur;
	int active_id_img = 0;

	void load_bd();
	void select(int id);
};