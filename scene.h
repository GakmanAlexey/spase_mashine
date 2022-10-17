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
class scene
{
public:
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

	bool scena3_start = false;
	void main(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b);
	void scena1(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b);
	void scena2(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b);
	void scena2_preload(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b);
	void scena3(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b);
};

