#include "scene.h"
#include "custom_event.h"
#include <chrono>
#include "brain.h"

using namespace std::chrono;
void scene::main(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain &b) {
    b.cheack_save();
    b.load_save();

    if (c_e.focus_windows == 1) {
        scena1(cfg, ev, lo, l, f, c_e, window,  b);
    }
    else if (c_e.focus_windows == 2) {
        scena2(cfg, ev, lo, l, f, c_e, window,  b);
    }
};

void scene::scena1(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b) {
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

void scene::scena2(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b) {
    scena2_preload(cfg, ev, lo, l, f, c_e, window, b);
    
 
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
    window.draw(f.show_S(liners, lo.Texturs_avalist, 160, 110, ava_x[0], ava_y[0], 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 340, 30));
    window.draw(f.show_T(pl2, lo.base_font, 350, 35, pl2_text, 21, 0));
    window.draw(f.show_T(lvl_p2, lo.base_font, 352, 65, lvl_p2_text, 16, 0));
    l.button(356, 258, 149, 40, b2_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot12", ev);
    window.draw(f.show_S(liners, lo.Texturs_avalist, 370, 110, ava_x[1], ava_y[1], 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 550, 30));
    window.draw(f.show_T(pl3, lo.base_font, 560, 35, pl3_text, 21, 0));
    window.draw(f.show_T(lvl_p3, lo.base_font, 562, 65, lvl_p3_text, 16, 0));
    l.button(566, 258, 149, 40, b3_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot13", ev);
    window.draw(f.show_S(liners, lo.Texturs_avalist, 580, 110, ava_x[2], ava_y[2], 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 760, 30));
    window.draw(f.show_T(pl4, lo.base_font, 770, 35, pl4_text, 21, 0));
    window.draw(f.show_T(lvl_p4, lo.base_font, 772, 65, lvl_p4_text, 16, 0));
    l.button(776, 258, 149, 40, b4_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot14", ev);
    window.draw(f.show_S(liners, lo.Texturs_avalist, 790, 110, ava_x[3], ava_y[3], 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 970, 30));
    window.draw(f.show_T(pl5, lo.base_font, 980, 35, pl5_text, 21, 0));
    window.draw(f.show_T(lvl_p5, lo.base_font, 982, 65, lvl_p5_text, 16, 0));
    l.button(986, 258, 149, 40, b5_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot15", ev);
    window.draw(f.show_S(liners, lo.Texturs_avalist, 1000, 110, ava_x[4], ava_y[4], 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 130, 340));
    window.draw(f.show_T(pl6, lo.base_font, 140, 345, pl6_text, 21, 0));
    window.draw(f.show_T(lvl_p6, lo.base_font, 142, 375, lvl_p6_text, 16, 0));
    l.button(146, 567, 149, 40, b6_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot16", ev);
    window.draw(f.show_S(liners, lo.Texturs_avalist, 160, 430, ava_x[5], ava_y[5], 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 340, 340));
    window.draw(f.show_T(pl7, lo.base_font, 350, 345, pl7_text, 21, 0));
    window.draw(f.show_T(lvl_p7, lo.base_font, 352, 375, lvl_p7_text, 16, 0));
    l.button(356, 567, 149, 40, b7_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot17", ev);
    window.draw(f.show_S(liners, lo.Texturs_avalist, 370, 430, ava_x[6], ava_y[6], 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 550, 340));
    window.draw(f.show_T(pl8, lo.base_font, 560, 345, pl8_text, 21, 0));
    window.draw(f.show_T(lvl_p8, lo.base_font, 562, 375, lvl_p8_text, 16, 0));
    l.button(566, 567, 149, 40, b8_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot18", ev);
    window.draw(f.show_S(liners, lo.Texturs_avalist, 580, 430, ava_x[7], ava_y[7], 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 760, 340));
    window.draw(f.show_T(pl9, lo.base_font, 770, 345, pl9_text, 21, 0));
    window.draw(f.show_T(lvl_p9, lo.base_font, 772, 375, lvl_p9_text, 16, 0));
    l.button(776, 567, 149, 40, b9_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot19", ev);
    window.draw(f.show_S(liners, lo.Texturs_avalist, 790, 430, ava_x[8], ava_y[8], 128, 128));

    window.draw(f.show_F(sprite1, lo.Texturs_fon_select_game, 970, 340));
    window.draw(f.show_T(pl10, lo.base_font, 980, 345, pl10_text, 21, 0));
    window.draw(f.show_T(lvl_p10, lo.base_font, 982, 375, lvl_p10_text, 16, 0));
    l.button(986, 567, 149, 40, b10_text, 0, window, lo.Texturs_bottom_select_game, lo.base_font, "boot20", ev);
    window.draw(f.show_S(liners, lo.Texturs_avalist, 1000, 430, ava_x[9], ava_y[9], 128, 128));

    

    window.display();
    c_e.eve(ev);
};
void scene::scena2_preload(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b) {
    if (scena2_preload_flag) {
        return;
    }
    scena2_preload_flag = true;
    pl1_text = b.name_user[0];
    pl2_text = b.name_user[1];
    pl3_text = b.name_user[2];
    pl4_text = b.name_user[3];
    pl5_text = b.name_user[4];
    pl6_text = b.name_user[5];
    pl7_text = b.name_user[6];
    pl8_text = b.name_user[7];
    pl9_text = b.name_user[8];
    pl10_text = b.name_user[9];

    if (b.status_user[0] == "active") {        b1_text = L"Играть";       }else {        b1_text = L"Создать";    }
    if (b.status_user[1] == "active") {        b2_text = L"Играть";       }else {        b2_text = L"Создать";    }
    if (b.status_user[2] == "active") {        b3_text = L"Играть";       }else {        b3_text = L"Создать";    }
    if (b.status_user[3] == "active") {        b4_text = L"Играть";       }else {        b4_text = L"Создать";    }
    if (b.status_user[4] == "active") {        b5_text = L"Играть";       }else {        b5_text = L"Создать";    }
    if (b.status_user[5] == "active") {        b6_text = L"Играть";       }else {        b6_text = L"Создать";    }
    if (b.status_user[6] == "active") {        b7_text = L"Играть";       }else {        b7_text = L"Создать";    }
    if (b.status_user[7] == "active") {        b8_text = L"Играть";       }else {        b8_text = L"Создать";    }
    if (b.status_user[8] == "active") {        b9_text = L"Играть";       }else {        b9_text = L"Создать";    }
    if (b.status_user[9] == "active") {        b10_text = L"Играть";      }else {        b10_text = L"Создать";    }
    
    int i = 0;
    while (i < 10) {
        if (b.avatar_user[i] == "default") {
            ava_x.push_back(0);
            ava_y.push_back(0);
        }else if(b.avatar_user[i] == "1") {
            ava_x.push_back(128);
            ava_y.push_back(0);
        }
        else if (b.avatar_user[i] == "2") {
            ava_x.push_back(256);
            ava_y.push_back(0);
        }
        else if (b.avatar_user[i] == "3") {
            ava_x.push_back(384);
            ava_y.push_back(0);
        }
        else if (b.avatar_user[i] == "4") {
            ava_x.push_back(512);
            ava_y.push_back(0);
        }
        else if (b.avatar_user[i] == "5") {
            ava_x.push_back(640);
            ava_y.push_back(0);
        }
        else {
            ava_x.push_back(0);
            ava_y.push_back(0);
        }
        i++;
    }
};