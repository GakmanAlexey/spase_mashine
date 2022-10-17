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


	void load_weapon();
	void load_weapon_laser();
	void load_weapon_raket();
	void load_weapon_snariad();
	void load_weapon_plasma();
	void load_weapon_electro();


	void load_weapon_laser1();
	void load_weapon_laser2();
	void load_weapon_laser3();
	void load_weapon_laser4();
	void load_weapon_laser5();
	void load_weapon_laser6();
	void load_weapon_laser7();
	void load_weapon_laser8();
	void load_weapon_laser9();
	void load_weapon_laser10();


	void load_weapon_raket1();
	void load_weapon_raket2();
	void load_weapon_raket3();
	void load_weapon_raket4();
	void load_weapon_raket5();
	void load_weapon_raket6();
	void load_weapon_raket7();
	void load_weapon_raket8();
	void load_weapon_raket9();
	void load_weapon_raket10();


	void load_weapon_snariad1();
	void load_weapon_snariad2();
	void load_weapon_snariad3();
	void load_weapon_snariad4();
	void load_weapon_snariad5();
	void load_weapon_snariad6();
	void load_weapon_snariad7();
	void load_weapon_snariad8();
	void load_weapon_snariad9();
	void load_weapon_snariad10();


	void load_weapon_plasma1();
	void load_weapon_plasma2();
	void load_weapon_plasma3();
	void load_weapon_plasma4();
	void load_weapon_plasma5();
	void load_weapon_plasma6();
	void load_weapon_plasma7();
	void load_weapon_plasma8();
	void load_weapon_plasma9();
	void load_weapon_plasma10();


	void load_weapon_electro1();
	void load_weapon_electro2();
	void load_weapon_electro3();
	void load_weapon_electro4();
	void load_weapon_electro5();
	void load_weapon_electro6();
	void load_weapon_electro7();
	void load_weapon_electro8();
	void load_weapon_electro9();
	void load_weapon_electro10();


	void load_shield();

	void load_shield1();
	void load_shield2();
	void load_shield3();
	void load_shield4();
	void load_shield5();
	void load_shield6();
	void load_shield7();
	void load_shield8();
	void load_shield9();
	void load_shield10();

	void load_engin();

	void load_engin1();
	void load_engin2();
	void load_engin3();
	void load_engin4();
	void load_engin5();
	void load_engin6();
	void load_engin7();
	void load_engin8();
	void load_engin9();
	void load_engin10();
};

