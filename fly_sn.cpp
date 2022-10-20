#include "fly_sn.h"

void fly_sn::add_frend(int start_x, int start_y, int speed, int type_ids) {
	frend_x.push_back(start_x);
	frend_y.push_back(start_y);
	frend_speed.push_back(speed);
	type_id.push_back(type_ids);
	frend_isset.push_back(1);
};
void fly_sn::distructr_frend(int id) {

	frend_x.erase(frend_x.begin() + id);
	std::vector<int>(frend_x).swap(frend_x);


	frend_y.erase(frend_y.begin() + id);
	std::vector<int>(frend_y).swap(frend_y);


	frend_speed.erase(frend_speed.begin() + id);
	std::vector<int>(frend_speed).swap(frend_speed);


	frend_isset.erase(frend_isset.begin() + id);
	std::vector<int>(frend_isset).swap(frend_isset);


	type_id.erase(type_id.begin() + id);
	std::vector<int>(type_id).swap(type_id);
	
};
void fly_sn::move() {
	if (!flag_job) {
		flag_job = true;
		return;
	}
	base_speed_x++;
	int i = 0;
	while (i < frend_x.size()) {
			frend_y[i] = frend_y[i] - frend_speed[i];
		if (frend_y[i] < -10) {
			frend_isset[i] = 0;
			distructr_frend(i);
		}
		i++;
	}
};