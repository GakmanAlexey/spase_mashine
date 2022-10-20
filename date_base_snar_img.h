#pragma once
#include <vector>
class date_base_snar_img 
{
public:
	int active_x = 0;
	int active_y = 0;
	int active_w = 0;
	int active_h = 0;
	int active_id_img = 0;

	void select(int id);
};