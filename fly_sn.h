#pragma once
#include <vector>
class fly_sn
{
public:
	std::vector <int> frend_x;
	std::vector <int> frend_y;
	std::vector <int> frend_speed;
	std::vector <int> frend_isset;
	std::vector <int> type_id;
	int base_speed = 2;
	int base_speed_x = 0;

	bool flag_job = false;

	void add_frend(int start_x, int start_y, int speed, int type_ids);
	void distructr_frend(int id);
	void move();
	void clear();
};
