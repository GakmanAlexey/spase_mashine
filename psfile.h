#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "F.h"
class psfile
{
public:
	psfile(std::string url);
	F f;

	std::vector <std::string> name;
	std::vector <std::string> param;

	bool status = false;
	std::string result = "";
	std::string url_file = "";
	bool create();
	bool open();
	bool select(std::string name_block);
	bool update(std::string name_param, std::string value);
	bool insert(std::string name_param, std::string value);
	bool save();
};

