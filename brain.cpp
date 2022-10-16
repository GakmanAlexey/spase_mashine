#include "brain.h"
#include <string> 
#include <ctime>
#include "psfile.h"
#include <vector>
void brain::create_save(int id_save) {
	std::string s_id_save = std::to_string(id_save);
	std::string url = "save_" + s_id_save;
	psfile ps(url);
	ps.create();
	//дата создания файла
	time_t now = time(0);
	std::string dt = std::to_string(now);
	ps.insert("create_date", dt);
	ps.insert("status", "new");
	ps.insert("user_name", "none");
	ps.insert("avatar", "default");
	ps.insert("lvl", "1");
	ps.insert("exp", "0");
	ps.save();
};
void brain::cheack_save() {
	if (cheack_save_flag) {
		return;
	}
	cheack_save_flag = true;
	int x = 1;
	while (x != 11) {

		std::string s_id_save = std::to_string(x);
		std::string url = "save_" + s_id_save;
		psfile ps(url);
		ps.open();
		ps.select("status");
		if (ps.result != "active" and ps.result != "new") {
			create_save(x);
		}
		x++;
	}

}

void brain::load_save() {
	if (load_save_flag) {
		return;
	}
	load_save_flag = true;
	int x = 1;
	while (x != 11) {
		std::string s_id_save = std::to_string(x);
		std::string url = "save_" + s_id_save;
		psfile ps(url);
		ps.open();
		ps.select("status");
		status_user.push_back(ps.result);
		ps.select("user_name");
		name_user.push_back(ps.result);
		ps.select("avatar");
		avatar_user.push_back(ps.result);
		ps.select("lvl");
		lvl_user.push_back(ps.result);
		ps.select("exp");
		exp_user.push_back(ps.result);
		x++;
	}

};