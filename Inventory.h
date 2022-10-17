#pragma once
#include <vector>
#include <string>
class Inventory 
{
public:
	std::vector <std::string> resourse_name;
	std::vector <int> resourse_count;

	std::vector <int> component_liner1;
	std::vector <int> component_liner2;
	std::vector <int> component_liner3;
	std::vector <int> component_liner4;
	std::vector <int> component_liner5;

	std::vector <int> moduls_id;

	void load();
	void load_resourse();
	void load_liners();
	void load_moduls();

};