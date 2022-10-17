#pragma once
#include <string>
#include <vector>
class date_base
{
public:
	std::vector <int>  damage_laser ;
	std::vector <int>  damage_raket ;
	std::vector <int>  damage_snariad ;
	std::vector <int>  damage_plasma ;
	std::vector <int>  damage_electro ;
	std::vector <int>  damage_stolk ;

	std::vector <int>  defender_laser ;
	std::vector <int>  defender_raket ;
	std::vector <int>  defender_snariad ;
	std::vector <int>  defender_plasma ;
	std::vector <int>  defender_electro ;
	std::vector <int>  defender_stolk ;

	std::vector <int> stats_hp ;
	std::vector <int> stats_energi ;
	std::vector <int> stats_mass ;

	//----

	std::vector <float>  kf_damage_laser ;
	std::vector <float>  kf_damage_raket ;
	std::vector <float>  kf_damage_snariad ;
	std::vector <float>  kf_damage_plasma ;
	std::vector <float>  kf_damage_electro ;
	std::vector <float>  kf_damage_stolk ;

	std::vector <float>  kf_defender_laser ;
	std::vector <float>  kf_defender_raket ;
	std::vector <float>  kf_defender_snariad ;
	std::vector <float>  kf_defender_plasma ;
	std::vector <float>  kf_defender_electro ;
	std::vector <float>  kf_defender_stolk ;

	std::vector <float>  kf_stats_hp ;
	std::vector <float>  kf_stats_energi ;
	std::vector <float>  kf_stats_mass ;


	//-----
	std::vector <int> id_type ;
	std::vector <int> position ;
	std::vector <int> id_des ;
	std::vector <int> lvl ;
	std::vector <std::string> name;

	void load_corps();

	void load_corp1();
	void load_corp2();
	void load_corp3();
	void load_corp4();
	void load_corp5();
	void load_corp6();
	void load_corp7();
	void load_corp8();
	void load_corp9();
	void load_corp10();

};

