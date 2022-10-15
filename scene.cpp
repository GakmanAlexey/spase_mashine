#include "scene.h"
#include "custom_event.h"
#include <chrono>

using namespace std::chrono;
void scene::main(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window) {
    
    if (c_e.focus_windows == 1) {
        scena1(cfg, ev, lo, l, f, c_e, window);
    }
    else if (c_e.focus_windows == 2) {
        scena2(cfg, ev, lo, l, f, c_e, window);
    }
};

void scene::scena1(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window) {
    sf::Sprite sprite1;
    sf::Event evsf;
    ev.sf_ev(evsf, window);
    // ----------------------------------
    window.clear();
    ev.boot_clear();
    l.fon(window, lo.Texturs_fonG);
    l.button(490, 250, 300, 50, L"Играть в одиночку", 0, window, lo.Texturs_fonB, lo.base_font, "boot1", ev);
    l.button(490, 310, 300, 50, L"Играть вдвоем", 0, window, lo.Texturs_fonB, lo.base_font, "boot2", ev);
    l.button(490, 370, 300, 50, L"Играть по сети", 0, window, lo.Texturs_fonB, lo.base_font, "boot3", ev);
    l.button(490, 430, 300, 50, L"Настройки", 0, window, lo.Texturs_fonB, lo.base_font, "boot4", ev);
    l.button(490, 550, 300, 50, L"Выход", 0, window, lo.Texturs_fonB, lo.base_font, "boot5", ev);


    window.display();
    c_e.eve(ev);
};

void scene::scena2(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window) {
    scena2_preload();
    sf::Sprite sprite1;
    sf::Event evsf;
    ev.sf_ev(evsf, window);
    // ----------------------------------
    window.clear();
    ev.boot_clear();
    l.fon(window, lo.Texturs_fonG);
    l.button(490, 650, 300, 50, L"Назад", 0, window, lo.Texturs_fonB, lo.base_font, "boot6", ev);


    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 130, 30));
    window.draw(f.show_T(pl1, lo.base_font, 140, 35, pl1_text, 21, 0));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 340, 30));
    window.draw(f.show_T(pl2, lo.base_font, 350, 35, pl2_text, 21, 0));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 550, 30));
    window.draw(f.show_T(pl3, lo.base_font, 560, 35, pl3_text, 21, 0));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 760, 30));
    window.draw(f.show_T(pl4, lo.base_font, 770, 35, pl4_text, 21, 0));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 970, 30));
    window.draw(f.show_T(pl5, lo.base_font, 980, 35, pl5_text, 21, 0));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 130, 340));
    window.draw(f.show_T(pl6, lo.base_font, 140, 345, pl6_text, 21, 0));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 340, 340));
    window.draw(f.show_T(pl7, lo.base_font, 350, 345, pl7_text, 21, 0));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 550, 340));
    window.draw(f.show_T(pl8, lo.base_font, 560, 345, pl8_text, 21, 0));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 760, 340));
    window.draw(f.show_T(pl9, lo.base_font, 770, 345, pl9_text, 21, 0));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 970, 340));
    window.draw(f.show_T(pl10, lo.base_font, 980, 345, pl10_text, 21, 0));

    

    window.display();
    c_e.eve(ev);
};
void scene::scena2_preload() {
    if (scena2_preload_flag) {
        return;
    }
    scena2_preload_flag = true;
};