#include "psfile.h"
#include <fstream>
using namespace std;

 psfile::psfile(std::string url) {
	 url_file = url + ".txt";
}
bool psfile::create() {
	ofstream fout(url_file);
	fout.close();
	return true;
};
bool psfile::open() {
	return true;
};
bool psfile::select(std::string name_block) {
	return true;
};
bool psfile::update(std::string name_param, std::string value) {
	status = true;
	int i = 0;
	while (i < name.size()) {
		if (name[i] == name_param) {
			param[i] == value;
			status = true;
			return true;
		}
		i++;
	}
	status = false;
	return false;
};
bool psfile::insert(std::string name_param, std::string value) {
	status = true;
	int i = 0;
	while (i < name.size()) {
		if (name[i] == name_param) {
			status = false;
			return false;
		}
		i++;
	}
	name.push_back(name_param);
	param.name_param(value);
	return true;
};
bool psfile::save() {
	return true;
};