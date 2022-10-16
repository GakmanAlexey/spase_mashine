#include "psfile.h"
#include <fstream>
#include <iostream>
#include <string> 
#include "F.h"
#include "CFG.h"
#include <vector>
using namespace std;

 psfile::psfile(std::string url) {
	 CFG cfg;
	 url_file = cfg.save + url + ".txt";
}
bool psfile::create() {
	ofstream fout(url_file);
	fout.close();
	return true;
};
bool psfile::open() {
	status = false;
	string s;
	vector <string> timed_res;

	ifstream file(url_file);
	while (getline(file, s)) { // пока не достигнут конец файла класть очередную строку в переменную (s)
		timed_res = f.spl(s);
		name.push_back(timed_res[0]);
		param.push_back(timed_res[1]);
	}
	file.close();
	status = true;
	return true;
};
bool psfile::select(std::string name_block) {
	int i = 0;
	while (i < name.size()) {
		if (name[i] == name_block) {
			result = param[i];
			status = true;
			return true;
		}
		i++;
	}
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
	param.push_back(value);
	return true;
};
bool psfile::save() {
	ofstream fout(url_file, ios_base::out);
	int i = 0;
	string s;
	while (i < name.size()) {
		s = name[i] + '•' + param[i] + '\n';
		fout << s;
		i++;
	}
	fout.close();
	return true;
};