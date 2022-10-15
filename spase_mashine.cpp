﻿#include <SFML/Graphics.hpp>
#include <iostream>

#include "CFG.h"
#include "event.h"
#include "Load.h"
#include "L.h"
#include "F.h"
#include "custom_event.h"
#include "scene.h"

int main()
{
    CFG cfg;
    event ev;
    Load lo;
    L l;
    F f;
    custom_event c_e;
    sf::RenderWindow window(sf::VideoMode(cfg.windows_width, cfg.windows_height), L"Крестики нолики by RedLava");

    lo.font();
    lo.img();
    lo.texturs();
    sf::Sprite sprite1;
    scene sc;
    while (ev.windows_job)
    {
        sc.main(cfg, ev, lo, l, f, c_e, window);
    }

    return 0;
}