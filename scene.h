#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

#include "CFG.h"
#include "event.h"
#include "Load.h"
#include "L.h"
#include "F.h"
#include "custom_event.h"
class scene
{
public:
	int sce = 1;
	bool scena2_preload_flag = false;

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

	bool scena3_start = false;
	void main(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window);
	void scena1(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window);
	void scena2(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window);
	void scena2_preload();
};

