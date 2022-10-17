#include <SFML/Graphics.hpp>
#include <iostream>

#include "CFG.h"
#include "event.h"
#include "Load.h"
#include "L.h"
#include "F.h"
#include "custom_event.h"
#include "scene.h"
#include "psfile.h"
#include "brain.h"

#include "Inventory.h"
#include "date_base.h"
#include "date_base_img.h"

int main()
{
    
    CFG cfg;
    event ev;
    Load lo;
    L l;
    F f;
    brain b;
    custom_event c_e;

    Inventory inv;
    inv.load();
    date_base db;
    db.load();
    date_base_img dbi;
    dbi.load_bd();
    sf::RenderWindow window(sf::VideoMode(cfg.windows_width, cfg.windows_height), L"Крестики нолики by RedLava");
    
    
    lo.font();
    lo.img();
    lo.texturs();
    sf::Sprite sprite1;
    scene sc;
    while (ev.windows_job)
    {
        sc.main(cfg, ev, lo, l, f, c_e, window,b, inv, db, dbi);
    }
    return 0;
}