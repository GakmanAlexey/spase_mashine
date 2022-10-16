#pragma once
#include <vector>
class brain
{
public:
	std::vector <std::string> status_user;
	std::vector <std::string> name_user;
	std::vector <std::string> avatar_user;
	std::vector <std::string> lvl_user;
	std::vector <std::string> exp_user;


	void create_save(int id_save);

	bool cheack_save_flag = false;
	void cheack_save();

	bool load_save_flag = false;
	void load_save();
};

