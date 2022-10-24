#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

#include "CFG.h"
#include "event.h"
#include "Load.h"
#include "L.h"
#include "F.h"
#include "custom_event.h"
#include "brain.h"


#include "Inventory.h"
#include "date_base.h"
#include "date_base_img.h"
#include "fly_sn.h"
#include "date_base_snar_img.h"
class scene
{
public:

	fly_sn fl;
	date_base_snar_img db_scn;
	int fly_i_cef = 0;

	int fly_i = 0;
	int pos_fon = 7200;
	int pos_fon2 = 0;
	float pos_fon_i = 0;
	bool leauer = true;


	int sce = 1;
	bool scena2_preload_flag = false;

	std::vector <int> ava_x;
	std::vector <int> ava_y;
	sf::Text pl1;
	sf::String pl1_text = L"1";
	sf::Text pl2;
	sf::String pl2_text = L"2";
	sf::Text pl3;
	sf::String pl3_text = L"3";
	sf::Text pl4;
	sf::String pl4_text = L"4";
	sf::Text pl5;
	sf::String pl5_text = L"5";
	sf::Text pl6;
	sf::String pl6_text = L"6";
	sf::Text pl7;
	sf::String pl7_text = L"7";
	sf::Text pl8;
	sf::String pl8_text = L"8";
	sf::Text pl9;
	sf::String pl9_text = L"9";
	sf::Text pl10;
	sf::String pl10_text = L"10";

	sf::Text lvl_p1;
	sf::String lvl_p1_text = L"Уровень: 1";
	sf::Text lvl_p2;
	sf::String lvl_p2_text = L"Уровень: 1";
	sf::Text lvl_p3;
	sf::String lvl_p3_text = L"Уровень: 1";
	sf::Text lvl_p4;
	sf::String lvl_p4_text = L"Уровень: 1";
	sf::Text lvl_p5;
	sf::String lvl_p5_text = L"Уровень: 1";
	sf::Text lvl_p6;
	sf::String lvl_p6_text = L"Уровень: 1";
	sf::Text lvl_p7;
	sf::String lvl_p7_text = L"Уровень: 1";
	sf::Text lvl_p8;
	sf::String lvl_p8_text = L"Уровень: 1";
	sf::Text lvl_p9;
	sf::String lvl_p9_text = L"Уровень: 1";
	sf::Text lvl_p10;
	sf::String lvl_p10_text = L"Уровень: 1";


	sf::String b1_text = L"Играть";
	sf::String b2_text = L"Создать";
	sf::String b3_text = L"Создать";
	sf::String b4_text = L"Создать";
	sf::String b5_text = L"Создать";
	sf::String b6_text = L"Создать";
	sf::String b7_text = L"Создать";
	sf::String b8_text = L"Создать";
	sf::String b9_text = L"Создать";
	sf::String b10_text = L"Создать";


	sf::Text res1;
	sf::String res1_text = L"Монеты";
	sf::Text res1_count;
	sf::String res1_count_text = L"0";

	sf::Text res2;
	sf::String res2_text = L"Фрагменты";
	sf::Text res2_count;
	sf::String res2_count_text = L"0";

	sf::Text res3;
	sf::String res3_text = L"Страницы";
	sf::Text res3_count;
	sf::String res3_count_text = L"0";

	sf::Text res4;
	sf::String res4_text = L"Медь";
	sf::Text res4_count;
	sf::String res4_count_text = L"0";

	sf::Text res5;
	sf::String res5_text = L"Алюминий";
	sf::Text res5_count;
	sf::String res5_count_text = L"0";

	sf::Text res6;
	sf::String res6_text = L"Железо";
	sf::Text res6_count;
	sf::String res6_count_text = L"0";

	sf::Text res7;
	sf::String res7_text = L"Золото";
	sf::Text res7_count;
	sf::String res7_count_text = L"0";

	sf::Text res8;
	sf::String res8_text = L"Платина";
	sf::Text res8_count;
	sf::String res8_count_text = L"0";

	sf::Text res9;
	sf::String res9_text = L"Иридий";
	sf::Text res9_count;
	sf::String res9_count_text = L"0";

	sf::Text res10;
	sf::String res10_text = L"Уран";
	sf::Text res10_count;
	sf::String res10_count_text = L"0";


	sf::Text res11;
	sf::String res11_text = L"Кремний";
	sf::Text res11_count;
	sf::String res11_count_text = L"0";

	sf::Text res12;
	sf::String res12_text = L"Вольфрам";
	sf::Text res12_count;
	sf::String res12_count_text = L"0";

	sf::Text res13;
	sf::String res13_text = L"Серебро";
	sf::Text res13_count;
	sf::String res13_count_text = L"0";

	sf::Text res14;
	sf::String res14_text = L"Кадмий";
	sf::Text res14_count;
	sf::String res14_count_text = L"0";

	sf::Text res15;
	sf::String res15_text = L"Сербантий";
	sf::Text res15_count;
	sf::String res15_count_text = L"0";

	sf::Text res16;
	sf::String res16_text = L"Ртуть";
	sf::Text res16_count;
	sf::String res16_count_text = L"0";

	sf::Text res17;
	sf::String res17_text = L"Висмус";
	sf::Text res17_count;
	sf::String res17_count_text = L"0";

	sf::Text res18;
	sf::String res18_text = L"Никель";
	sf::Text res18_count;
	sf::String res18_count_text = L"0";

	sf::Text res19;
	sf::String res19_text = L"Алерций";
	sf::Text res19_count;
	sf::String res19_count_text = L"0";

	sf::Text res20;
	sf::String res20_text = L"Ринуан";
	sf::Text res20_count;
	sf::String res20_count_text = L"0";

	bool scena3_start = false;
	void main(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory &inv, date_base &db, date_base_img &dbi);
	void scena1(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi);
	void scena2(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi);
	void scena2_preload(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi);
	void scena3(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi);
	void scena4(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi);
	void scena4_fon(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi);
	void scena4_snaryad(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi);
	void scena5(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi);
};

