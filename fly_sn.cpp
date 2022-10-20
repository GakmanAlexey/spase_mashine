#include "fly_sn.h"

void fly_sn::add_frend(int start_x, int start_y, int speed, int type_ids) {
	frend_x.push_back(start_x);
	frend_y.push_back(start_y);
	frend_speed.push_back(speed);
	type_id.push_back(type_ids);
	frend_isset.push_back(1);
};
void fly_sn::distructr_frend(int id) {

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