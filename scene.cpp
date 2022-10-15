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
    sf::Sprite liners;
    sf::Event evsf;
    ev.sf_ev(evsf, window);
    // ----------------------------------
    window.clear();
    ev.boot_clear();
    l.fon(window, lo.Texturs_fonG);
    l.button(490, 650, 300, 50, L"Назад", 0, window, lo.Texturs_fonB, lo.base_font, "boot6", ev);


    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 130, 30));
    window.draw(f.show_T(pl1, lo.base_font, 140, 35, pl1_text, 21, 0));
    window.draw(f.show_T(lvl_p1, lo.base_font, 142, 65, lvl_p1_text, 16, 0));
    l.button(146, 258, 149, 40, b1_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot11", ev);
    window.draw(f.show_S(liners, lo.Texturs_airLiners, 160, 110, 0, 0, 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 340, 30));
    window.draw(f.show_T(pl2, lo.base_font, 350, 35, pl2_text, 21, 0));
    window.draw(f.show_T(lvl_p2, lo.base_font, 352, 65, lvl_p2_text, 16, 0));
    l.button(356, 258, 149, 40, b2_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot12", ev);
    window.draw(f.show_S(liners, lo.Texturs_airLiners, 370, 110, 128, 0, 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 550, 30));
    window.draw(f.show_T(pl3, lo.base_font, 560, 35, pl3_text, 21, 0));
    window.draw(f.show_T(lvl_p3, lo.base_font, 562, 65, lvl_p3_text, 16, 0));
    l.button(566, 258, 149, 40, b3_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot13", ev);
    window.draw(f.show_S(liners, lo.Texturs_airLiners, 580, 110, 256, 0, 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 760, 30));
    window.draw(f.show_T(pl4, lo.base_font, 770, 35, pl4_text, 21, 0));
    window.draw(f.show_T(lvl_p4, lo.base_font, 772, 65, lvl_p4_text, 16, 0));
    l.button(776, 258, 149, 40, b4_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot14", ev);
    window.draw(f.show_S(liners, lo.Texturs_airLiners, 790, 110, 384, 0, 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 970, 30));
    window.draw(f.show_T(pl5, lo.base_font, 980, 35, pl5_text, 21, 0));
    window.draw(f.show_T(lvl_p5, lo.base_font, 982, 65, lvl_p5_text, 16, 0));
    l.button(986, 258, 149, 40, b5_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot15", ev);
    window.draw(f.show_S(liners, lo.Texturs_airLiners, 1000, 110, 1152, 1152, 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 130, 340));
    window.draw(f.show_T(pl6, lo.base_font, 140, 345, pl6_text, 21, 0));
    window.draw(f.show_T(lvl_p6, lo.base_font, 142, 375, lvl_p6_text, 16, 0));
    l.button(146, 567, 149, 40, b6_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot16", ev);
    window.draw(f.show_S(liners, lo.Texturs_airLiners, 160, 430, 1152, 1152, 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 340, 340));
    window.draw(f.show_T(pl7, lo.base_font, 350, 345, pl7_text, 21, 0));
    window.draw(f.show_T(lvl_p7, lo.base_font, 352, 375, lvl_p7_text, 16, 0));
    l.button(356, 567, 149, 40, b7_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot17", ev);
    window.draw(f.show_S(liners, lo.Texturs_airLiners, 370, 430, 1152, 1152, 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 550, 340));
    window.draw(f.show_T(pl8, lo.base_font, 560, 345, pl8_text, 21, 0));
    window.draw(f.show_T(lvl_p8, lo.base_font, 562, 375, lvl_p8_text, 16, 0));
    l.button(566, 567, 149, 40, b8_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot18", ev);
    window.draw(f.show_S(liners, lo.Texturs_airLiners, 580, 430, 1152, 1152, 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 760, 340));
    window.draw(f.show_T(pl9, lo.base_font, 770, 345, pl9_text, 21, 0));
    window.draw(f.show_T(lvl_p9, lo.base_font, 772, 375, lvl_p9_text, 16, 0));
    l.button(776, 567, 149, 40, b9_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot19", ev);
    window.draw(f.show_S(liners, lo.Texturs_airLiners, 790, 430, 1152, 1152, 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 970, 340));
    window.draw(f.show_T(pl10, lo.base_font, 980, 345, pl10_text, 21, 0));
    window.draw(f.show_T(lvl_p10, lo.base_font, 982, 375, lvl_p10_text, 16, 0));
    l.button(986, 567, 149, 40, b10_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot20", ev);
    window.draw(f.show_S(liners, lo.Texturs_airLiners, 1000, 430, 1152, 1152, 128, 128));

    

    window.display();
    c_e.eve(ev);
};
void scene::scena2_preload() {
    if (scena2_preload_flag) {
        return;
    }
    scena2_preload_flag = true;
};