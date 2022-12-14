#include "scene.h"
#include "custom_event.h"
#include <chrono>
#include "brain.h"

using namespace std::chrono;
void scene::main(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain &b, Inventory& inv, date_base& db, date_base_img& dbi) {
    b.cheack_save();
    b.load_save();

    if (c_e.focus_windows == 1) {
        scena1(cfg, ev, lo, l, f, c_e, window,  b, inv, db, dbi);
    }
    else if (c_e.focus_windows == 2) {
        scena2(cfg, ev, lo, l, f, c_e, window,  b, inv, db, dbi);
    }
    else if (c_e.focus_windows == 10) {
        scena3(cfg, ev, lo, l, f, c_e, window, b, inv, db, dbi);
    }
    else if (c_e.focus_windows == 11) {
        scena4(cfg, ev, lo, l, f, c_e, window, b, inv, db, dbi);
    }
    else if (c_e.focus_windows == 12) {
        scena5(cfg, ev, lo, l, f, c_e, window, b, inv, db, dbi);
    }
};

void scene::scena1(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi) {
    sf::Sprite sprite1;
    sf::Event evsf;
    ev.sf_ev(evsf, window);
    // ----------------------------------
    window.clear();
    ev.boot_clear();
    l.fon(window, lo.Texturs_fonG);
    l.button(490, 250, 300, 50, L"?????? ? ????????", 0, window, lo.Texturs_fonB, lo.base_font, "boot1", ev);
    l.button(490, 310, 300, 50, L"?????? ??????", 0, window, lo.Texturs_fonB, lo.base_font, "boot2", ev);
    l.button(490, 370, 300, 50, L"?????? ?? ????", 0, window, lo.Texturs_fonB, lo.base_font, "boot3", ev);
    l.button(490, 430, 300, 50, L"?????????", 0, window, lo.Texturs_fonB, lo.base_font, "boot4", ev);
    l.button(490, 550, 300, 50, L"?????", 0, window, lo.Texturs_fonB, lo.base_font, "boot5", ev);


    window.display();
    c_e.eve(ev);
};

void scene::scena2(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi) {
    scena2_preload(cfg, ev, lo, l, f, c_e, window, b, inv, db, dbi);
    
 
    sf::Sprite sprite1;
    sf::Sprite liners;
    sf::Event evsf;
    ev.sf_ev(evsf, window);
    // ----------------------------------
    window.clear();
    ev.boot_clear();
    l.fon(window, lo.Texturs_fonG);
    l.button(490, 650, 300, 50, L"?????", 0, window, lo.Texturs_fonB, lo.base_font, "boot6", ev);


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
void scene::scena2_preload(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi) {
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

    if (b.status_user[0] == "active") {        b1_text = L"??????";       }else {        b1_text = L"???????";    }
    if (b.status_user[1] == "active") {        b2_text = L"??????";       }else {        b2_text = L"???????";    }
    if (b.status_user[2] == "active") {        b3_text = L"??????";       }else {        b3_text = L"???????";    }
    if (b.status_user[3] == "active") {        b4_text = L"??????";       }else {        b4_text = L"???????";    }
    if (b.status_user[4] == "active") {        b5_text = L"??????";       }else {        b5_text = L"???????";    }
    if (b.status_user[5] == "active") {        b6_text = L"??????";       }else {        b6_text = L"???????";    }
    if (b.status_user[6] == "active") {        b7_text = L"??????";       }else {        b7_text = L"???????";    }
    if (b.status_user[7] == "active") {        b8_text = L"??????";       }else {        b8_text = L"???????";    }
    if (b.status_user[8] == "active") {        b9_text = L"??????";       }else {        b9_text = L"???????";    }
    if (b.status_user[9] == "active") {        b10_text = L"??????";      }else {        b10_text = L"???????";    }
    
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

    lvl_p1_text = L"???????: " + b.lvl_user[0];
    lvl_p2_text = L"???????: " + b.lvl_user[1];
    lvl_p3_text = L"???????: " + b.lvl_user[2];
    lvl_p4_text = L"???????: " + b.lvl_user[3];
    lvl_p5_text = L"???????: " + b.lvl_user[4];
    lvl_p6_text = L"???????: " + b.lvl_user[5];
    lvl_p7_text = L"???????: " + b.lvl_user[6];
    lvl_p8_text = L"???????: " + b.lvl_user[7];
    lvl_p9_text = L"???????: " + b.lvl_user[8];
    lvl_p10_text = L"???????: " + b.lvl_user[9];
};

void scene::scena3(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi) {

    int x = 0;
    int y = 0;
    sf::Sprite sprite1;
    sf::Sprite sprite2;

    sf::Sprite airline;
    sf::Sprite module;
    sf::Sprite liners;
    sf::Event evsf;
    ev.sf_ev(evsf, window);
    // ----------------------------------
    window.clear();
    ev.boot_clear();
    l.fon(window, lo.Texturs_fonG); 

    window.draw(f.show_F(sprite2, lo.Texturs_airline_list, 60, 100));
    window.draw(f.show_F(sprite2, lo.Texturs_airline_list, 300, 100));
    window.draw(f.show_F(sprite2, lo.Texturs_airline_list, 540, 100));
    window.draw(f.show_F(sprite2, lo.Texturs_airline_list, 780, 100));
    window.draw(f.show_F(sprite2, lo.Texturs_airline_list, 1020, 100));
    l.button(60, 650, 200, 50, L"?????", 0, window, lo.Texturs_fonB, lo.base_font, "boot30", ev);
    l.button(300, 650, 200, 50, L"???????????", 0, window, lo.Texturs_fonB, lo.base_font, "boot31", ev);
    l.button(540, 650, 200, 50, L"? ???", 0, window, lo.Texturs_fonB, lo.base_font, "boot32", ev);
    l.button(780, 650, 200, 50, L"????? ????", 0, window, lo.Texturs_fonB, lo.base_font, "boot33", ev);
    l.button(1020, 650, 200, 50, L"?????", 0, window, lo.Texturs_fonB, lo.base_font, "boot34", ev);

    
    if (inv.component_liner1[0] != 0) {
        x = 96;
        y = 160;
        if (inv.component_liner1[1] != 0) {
            dbi.select(inv.component_liner1[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[2] != 0) {
            dbi.select(inv.component_liner1[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[3] != 0) {
            dbi.select(inv.component_liner1[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[4] != 0) {
            dbi.select(inv.component_liner1[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[5] != 0) {
            dbi.select(inv.component_liner1[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[6] != 0) {
            dbi.select(inv.component_liner1[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[7] != 0) {
            dbi.select(inv.component_liner1[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[8] != 0) {
            dbi.select(inv.component_liner1[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
            if (inv.component_liner1[9] != 0) {
            dbi.select(inv.component_liner1[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
            dbi.select(inv.component_liner1[0]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        
    }

    if (inv.component_liner2[0] != 0) {
        x = 336;
        y = 160;
        if (inv.component_liner2[1] != 0) {
            dbi.select(inv.component_liner2[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[2] != 0) {
            dbi.select(inv.component_liner2[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[3] != 0) {
            dbi.select(inv.component_liner2[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[4] != 0) {
            dbi.select(inv.component_liner2[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[5] != 0) {
            dbi.select(inv.component_liner2[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[6] != 0) {
            dbi.select(inv.component_liner2[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[7] != 0) {
            dbi.select(inv.component_liner2[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[8] != 0) {
            dbi.select(inv.component_liner2[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[9] != 0) {
            dbi.select(inv.component_liner2[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }

        dbi.select(inv.component_liner2[0]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }

    if (inv.component_liner3[0] != 0) {
        x = 576;
        y = 160;
        if (inv.component_liner3[1] != 0) {
            dbi.select(inv.component_liner3[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[2] != 0) {
            dbi.select(inv.component_liner3[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[3] != 0) {
            dbi.select(inv.component_liner3[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[4] != 0) {
            dbi.select(inv.component_liner3[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[5] != 0) {
            dbi.select(inv.component_liner3[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[6] != 0) {
            dbi.select(inv.component_liner3[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[7] != 0) {
            dbi.select(inv.component_liner3[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[8] != 0) {
            dbi.select(inv.component_liner3[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[9] != 0) {
            dbi.select(inv.component_liner3[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }

        dbi.select(inv.component_liner3[0]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }


    if (inv.component_liner4[0] != 0) {
        x = 816;
        y = 160;
        if (inv.component_liner4[1] != 0) {
            dbi.select(inv.component_liner4[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[2] != 0) {
            dbi.select(inv.component_liner4[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[3] != 0) {
            dbi.select(inv.component_liner4[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[4] != 0) {
            dbi.select(inv.component_liner4[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[5] != 0) {
            dbi.select(inv.component_liner4[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[6] != 0) {
            dbi.select(inv.component_liner4[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[7] != 0) {
            dbi.select(inv.component_liner4[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[8] != 0) {
            dbi.select(inv.component_liner4[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[9] != 0) {
            dbi.select(inv.component_liner4[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }

        dbi.select(inv.component_liner4[0]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }

    if (inv.component_liner5[0] != 0) {
        x = 1056;
        y = 160;
        if (inv.component_liner5[1] != 0) {
            dbi.select(inv.component_liner5[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[2] != 0) {
            dbi.select(inv.component_liner5[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[3] != 0) {
            dbi.select(inv.component_liner5[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[4] != 0) {
            dbi.select(inv.component_liner5[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[5] != 0) {
            dbi.select(inv.component_liner5[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[6] != 0) {
            dbi.select(inv.component_liner5[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[7] != 0) {
            dbi.select(inv.component_liner5[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[8] != 0) {
            dbi.select(inv.component_liner5[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[9] != 0) {
            dbi.select(inv.component_liner5[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }

        dbi.select(inv.component_liner5[0]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }

    String sel_airline_1 = L"???????";
    String sel_airline_2 = L"???????";
    String sel_airline_3 = L"???????";
    String sel_airline_4 = L"???????";
    String sel_airline_5 = L"???????";

    if (c_e.select_airline_game == 1) {
        sel_airline_1 = L"??????";
    }
    else if (c_e.select_airline_game == 2) {
        sel_airline_2 = L"??????";
    }
    else if (c_e.select_airline_game == 3) {
        sel_airline_3 = L"??????";
    }
    else if (c_e.select_airline_game == 4) {
        sel_airline_4 = L"??????";
    }
    else if (c_e.select_airline_game == 5) {
        sel_airline_5 = L"??????";
    }


    l.button(70, 540, 180, 50, sel_airline_1, 0, window, lo.Texturs_fonB, lo.base_font, "boot40", ev);
    l.button(310, 540, 180, 50, sel_airline_2, 0, window, lo.Texturs_fonB, lo.base_font, "boot41", ev);
    l.button(550, 540, 180, 50, sel_airline_3, 0, window, lo.Texturs_fonB, lo.base_font, "boot42", ev);
    l.button(790, 540, 180, 50, sel_airline_4, 0, window, lo.Texturs_fonB, lo.base_font, "boot43", ev);
    l.button(1030, 540, 180, 50, sel_airline_5, 0, window, lo.Texturs_fonB, lo.base_font, "boot44", ev);


    window.display();
    c_e.eve(ev);
};


void scene::scena4(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi) {


    int x = 0;
    int y = 0;
    sf::Sprite sprite1;
    sf::Sprite sprite2;

    sf::Sprite airline;
    sf::Sprite module;
    sf::Sprite liners;
    sf::Event evsf;
    ev.sf_ev(evsf, window);
    // ----------------------------------
    window.clear(Color(0, 0, 0, 255));
    ev.boot_clear();

    scena4_fon(cfg, ev, lo, l, f, c_e, window, b, inv, db, dbi);
    scena4_snaryad(cfg, ev, lo, l, f, c_e, window, b, inv, db, dbi);

 

    if (c_e.select_airline_game == 1) {
        if (inv.component_liner1[0] != 0) {
            y = 600 + c_e.position_y;
            x = x + c_e.position;
            if (inv.component_liner1[1] != 0) {
                dbi.select(inv.component_liner1[1]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 56, y + 28, 2, 1);
                }
            }
            if (inv.component_liner1[2] != 0) {
                dbi.select(inv.component_liner1[2]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 40, y + 44, 3, 1);
                }
            }
            if (inv.component_liner1[3] != 0) {
                dbi.select(inv.component_liner1[3]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 72, y + 44, 3, 1);
                }
            }
            if (inv.component_liner1[4] != 0) {
                dbi.select(inv.component_liner1[4]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 24, y + 60, 1, 1);
                }
            }
            if (inv.component_liner1[5] != 0) {
                dbi.select(inv.component_liner1[5]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 88, y + 60, 1, 1);
                }
            }
            if (inv.component_liner1[6] != 0) {
                dbi.select(inv.component_liner1[6]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 8, y + 76, 1, 1);
                }
            }
            if (inv.component_liner1[7] != 0) {
                dbi.select(inv.component_liner1[7]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if(fly_i == fl.min_count) {
                    fl.add_frend(x + 104, y + 76, 1, 1);
                }
            }
            if (inv.component_liner1[8] != 0) {
                dbi.select(inv.component_liner1[8]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            }
            if (inv.component_liner1[9] != 0) {
                dbi.select(inv.component_liner1[9]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            }
            dbi.select(inv.component_liner1[0]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));

        }
    }else if (c_e.select_airline_game == 2) {
        if (inv.component_liner2[0] != 0) {
            y = 600 + c_e.position_y;
            x = x + c_e.position;
            if (inv.component_liner2[1] != 0) {
                dbi.select(inv.component_liner2[1]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 56, y + 28, 3, 1);
                }
            }
            if (inv.component_liner2[2] != 0) {
                dbi.select(inv.component_liner2[2]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 40, y + 44, 3, 1);
                }
            }
            if (inv.component_liner2[3] != 0) {
                dbi.select(inv.component_liner2[3]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 72, y + 44, 3, 1);
                }
            }
            if (inv.component_liner2[4] != 0) {
                dbi.select(inv.component_liner2[4]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 24, y + 60, 3, 1);
                }
            }
            if (inv.component_liner2[5] != 0) {
                dbi.select(inv.component_liner2[5]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 88, y + 60, 3, 1);
                }
            }
            if (inv.component_liner2[6] != 0) {
                dbi.select(inv.component_liner2[6]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 8, y + 76, 3, 1);
                }
            }
            if (inv.component_liner2[7] != 0) {
                dbi.select(inv.component_liner2[7]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 104, y + 76, 3, 1);
                }
            }
            if (inv.component_liner2[8] != 0) {
                dbi.select(inv.component_liner2[8]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            }
            if (inv.component_liner2[9] != 0) {
                dbi.select(inv.component_liner2[9]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            }
            dbi.select(inv.component_liner2[0]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));

        }
    }
    else if (c_e.select_airline_game == 3) {
        if (inv.component_liner3[0] != 0) {
            y = 600 + c_e.position_y;
            x = x + c_e.position;
            if (inv.component_liner3[1] != 0) {
                dbi.select(inv.component_liner3[1]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 56, y + 28, 3, 1);
                }
            }
            if (inv.component_liner3[2] != 0) {
                dbi.select(inv.component_liner3[2]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 40, y + 44, 3, 1);
                }
            }
            if (inv.component_liner3[3] != 0) {
                dbi.select(inv.component_liner3[3]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 72, y + 44, 3, 1);
                }
            }
            if (inv.component_liner3[4] != 0) {
                dbi.select(inv.component_liner3[4]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 24, y + 60, 3, 1);
                }
            }
            if (inv.component_liner3[5] != 0) {
                dbi.select(inv.component_liner3[5]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 88, y + 60, 3, 1);
                }
            }
            if (inv.component_liner3[6] != 0) {
                dbi.select(inv.component_liner3[6]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 8, y + 76, 3, 1);
                }
            }
            if (inv.component_liner3[7] != 0) {
                dbi.select(inv.component_liner3[7]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
                if (fly_i == fl.min_count) {
                    fl.add_frend(x + 104, y + 76, 3, 1);
                }
            }
            if (inv.component_liner3[8] != 0) {
                dbi.select(inv.component_liner3[8]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            }
            if (inv.component_liner3[9] != 0) {
                dbi.select(inv.component_liner3[9]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            }
            dbi.select(inv.component_liner3[0]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));

        }
    }
    else if (c_e.select_airline_game == 4) {
    if (inv.component_liner4[0] != 0) {
        y = 600 + c_e.position_y;
        x = x + c_e.position;
        if (inv.component_liner4[1] != 0) {
            dbi.select(inv.component_liner4[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            if (fly_i == fl.min_count) {
                fl.add_frend(x + 56, y + 28, 3, 1);
            }
        }
        if (inv.component_liner4[2] != 0) {
            dbi.select(inv.component_liner4[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            if (fly_i == fl.min_count) {
                fl.add_frend(x + 40, y + 44, 3, 1);
            }
        }
        if (inv.component_liner4[3] != 0) {
            dbi.select(inv.component_liner4[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            if (fly_i == fl.min_count) {
                fl.add_frend(x + 72, y + 44, 3, 1);
            }
        }
        if (inv.component_liner4[4] != 0) {
            dbi.select(inv.component_liner4[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            if (fly_i == fl.min_count) {
                fl.add_frend(x + 24, y + 60, 3, 1);
            }
        }
        if (inv.component_liner4[5] != 0) {
            dbi.select(inv.component_liner4[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            if (fly_i == fl.min_count) {
                fl.add_frend(x + 88, y + 60, 3, 1);
            }
        }
        if (inv.component_liner4[6] != 0) {
            dbi.select(inv.component_liner4[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            if (fly_i == fl.min_count) {
                fl.add_frend(x + 8, y + 76, 3, 1);
            }
        }
        if (inv.component_liner4[7] != 0) {
            dbi.select(inv.component_liner4[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            if (fly_i == fl.min_count) {
                fl.add_frend(x + 8, y + 76, 3, 1);
            }
        }
        if (inv.component_liner4[8] != 0) {
            dbi.select(inv.component_liner4[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[9] != 0) {
            dbi.select(inv.component_liner4[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        dbi.select(inv.component_liner4[0]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));

    }
    }
    else if (c_e.select_airline_game == 5) {
    if (inv.component_liner5[0] != 0) {
        y = 600 + c_e.position_y;
        x = x + c_e.position;
        if (inv.component_liner5[1] != 0) {
            dbi.select(inv.component_liner5[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            if (fly_i == fl.min_count) {
                fl.add_frend(x + 56, y + 28, 3, 1);
            }
        }
        if (inv.component_liner5[2] != 0) {
            dbi.select(inv.component_liner5[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            if (fly_i == fl.min_count) {
                fl.add_frend(x + 40, y + 44, 3, 1);
            }
        }
        if (inv.component_liner5[3] != 0) {
            dbi.select(inv.component_liner5[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            if (fly_i == fl.min_count) {
                fl.add_frend(x + 72, y + 44, 3, 1);
            }
        }
        if (inv.component_liner5[4] != 0) {
            dbi.select(inv.component_liner5[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            if (fly_i == fl.min_count) {
                fl.add_frend(x + 24, y + 60, 3, 1);
            }
        }
        if (inv.component_liner5[5] != 0) {
            dbi.select(inv.component_liner5[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            if (fly_i == fl.min_count) {
                fl.add_frend(x + 88, y + 60, 3, 1);
            }
        }
        if (inv.component_liner5[6] != 0) {
            dbi.select(inv.component_liner5[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            if (fly_i == fl.min_count) {
                fl.add_frend(x + 8, y + 76, 3, 1);
            }
        }
        if (inv.component_liner5[7] != 0) {
            dbi.select(inv.component_liner5[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            if (fly_i == fl.min_count) {
                fl.add_frend(x + 104, y + 76, 3, 1);
            }
        }
        if (inv.component_liner5[8] != 0) {
            dbi.select(inv.component_liner5[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[9] != 0) {
            dbi.select(inv.component_liner5[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        dbi.select(inv.component_liner5[0]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));

    }
    }





    if (fly_i == 10) {
        fly_i = 0;
    }

    window.display();
    c_e.eve(ev);
};


void scene::scena4_fon(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi) {
    Sprite sprite1;
    pos_fon_i += 0.1;

    if (pos_fon_i > 1) {
        pos_fon_i = 0;
        pos_fon--;
        pos_fon2--;
    }
    if (pos_fon == -6480)
    {
        pos_fon = 7200;
    }
    if (pos_fon2 == -6480)
    {
        pos_fon2 = 7200;
    }
        window.draw(f.show_F(sprite1, lo.Texturs_fon_area, 0, 0 - pos_fon));
        window.draw(f.show_F(sprite1, lo.Texturs_fon_area, 0, 0 - pos_fon2));
    

    
    
};

void scene::scena4_snaryad(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi) {
    Sprite sp1;
    int i = 0;
    if (c_e.CurrentFrame == 1) {
        fly_i_cef++;
        if (fly_i_cef == 3) {
            fly_i_cef = 0;
            fly_i++;
        }
    }
    if (fly_i == 10) {
        fl.move();
    }
    while (i < fl.type_id.size()) {

        db_scn.select(fl.type_id[i]);
        window.draw(f.show_S(sp1, lo.Texturs_matrix_mods, fl.frend_x[i], fl.frend_y[i], db_scn.active_x, db_scn.active_y, db_scn.active_w, db_scn.active_h));

        i++;
    }
    fl.move();

};

void scene::scena5(CFG& cfg, event& ev, Load& lo, L& l, F& f, custom_event& c_e, sf::RenderWindow& window, brain& b, Inventory& inv, date_base& db, date_base_img& dbi) {
    int x = 0;
    int y = 0;
    sf::Sprite sprite1;
    sf::Sprite sprite2;

    sf::Sprite airline;
    sf::Sprite module;
    sf::Sprite liners;
    sf::Event evsf;
    ev.sf_ev(evsf, window);
    // ----------------------------------
    window.clear(Color(0, 0, 0, 255));
    ev.boot_clear();


    l.fon(window, lo.Texturs_fonG);
    l.fon(window, lo.Texturs_fon_inv);

    l.button(800, 650, 300, 50, L"?????", 0, window, lo.Texturs_fonB, lo.base_font, "boot39", ev);



    if (inv.component_liner1[0] != 0) {
        x = 15;
        y = 12;
        if (inv.component_liner1[1] != 0) {
            dbi.select(inv.component_liner1[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[2] != 0) {
            dbi.select(inv.component_liner1[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[3] != 0) {
            dbi.select(inv.component_liner1[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[4] != 0) {
            dbi.select(inv.component_liner1[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[5] != 0) {
            dbi.select(inv.component_liner1[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[6] != 0) {
            dbi.select(inv.component_liner1[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[7] != 0) {
            dbi.select(inv.component_liner1[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[8] != 0) {
            dbi.select(inv.component_liner1[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[9] != 0) {
            dbi.select(inv.component_liner1[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        dbi.select(inv.component_liner1[0]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));

    }

    if (inv.component_liner2[0] != 0) {
        x = 15;
        y = 152;
        if (inv.component_liner2[1] != 0) {
            dbi.select(inv.component_liner2[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[2] != 0) {
            dbi.select(inv.component_liner2[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[3] != 0) {
            dbi.select(inv.component_liner2[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[4] != 0) {
            dbi.select(inv.component_liner2[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[5] != 0) {
            dbi.select(inv.component_liner2[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[6] != 0) {
            dbi.select(inv.component_liner2[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[7] != 0) {
            dbi.select(inv.component_liner2[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[8] != 0) {
            dbi.select(inv.component_liner2[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[9] != 0) {
            dbi.select(inv.component_liner2[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }

        dbi.select(inv.component_liner2[0]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }

    if (inv.component_liner3[0] != 0) {

        x = 15;
        y = 292;
        if (inv.component_liner3[1] != 0) {
            dbi.select(inv.component_liner3[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[2] != 0) {
            dbi.select(inv.component_liner3[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[3] != 0) {
            dbi.select(inv.component_liner3[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[4] != 0) {
            dbi.select(inv.component_liner3[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[5] != 0) {
            dbi.select(inv.component_liner3[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[6] != 0) {
            dbi.select(inv.component_liner3[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[7] != 0) {
            dbi.select(inv.component_liner3[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[8] != 0) {
            dbi.select(inv.component_liner3[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[9] != 0) {
            dbi.select(inv.component_liner3[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }

        dbi.select(inv.component_liner3[0]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }


    if (inv.component_liner4[0] != 0) {
        x = 15;
        y = 432;
        if (inv.component_liner4[1] != 0) {
            dbi.select(inv.component_liner4[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[2] != 0) {
            dbi.select(inv.component_liner4[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[3] != 0) {
            dbi.select(inv.component_liner4[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[4] != 0) {
            dbi.select(inv.component_liner4[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[5] != 0) {
            dbi.select(inv.component_liner4[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[6] != 0) {
            dbi.select(inv.component_liner4[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[7] != 0) {
            dbi.select(inv.component_liner4[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[8] != 0) {
            dbi.select(inv.component_liner4[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[9] != 0) {
            dbi.select(inv.component_liner4[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }

        dbi.select(inv.component_liner4[0]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }

    if (inv.component_liner5[0] != 0) {
        x = 15;
        y = 572;
        if (inv.component_liner5[1] != 0) {
            dbi.select(inv.component_liner5[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[2] != 0) {
            dbi.select(inv.component_liner5[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[3] != 0) {
            dbi.select(inv.component_liner5[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[4] != 0) {
            dbi.select(inv.component_liner5[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[5] != 0) {
            dbi.select(inv.component_liner5[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[6] != 0) {
            dbi.select(inv.component_liner5[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[7] != 0) {
            dbi.select(inv.component_liner5[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[8] != 0) {
            dbi.select(inv.component_liner5[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[9] != 0) {
            dbi.select(inv.component_liner5[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }

        dbi.select(inv.component_liner5[0]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }

    if (inv.component_liner1[0] != 0) {
        x = 152;
        y = 12;
        if (inv.component_liner1[1] != 0) {
            dbi.select(inv.component_liner1[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[2] != 0) {
            dbi.select(inv.component_liner1[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[3] != 0) {
            dbi.select(inv.component_liner1[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[4] != 0) {
            dbi.select(inv.component_liner1[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[5] != 0) {
            dbi.select(inv.component_liner1[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[6] != 0) {
            dbi.select(inv.component_liner1[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[7] != 0) {
            dbi.select(inv.component_liner1[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[8] != 0) {
            dbi.select(inv.component_liner1[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner1[9] != 0) {
            dbi.select(inv.component_liner1[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }

    }

    if (inv.component_liner2[0] != 0) {
        x = 152;
        y = 152;
        if (inv.component_liner2[1] != 0) {
            dbi.select(inv.component_liner2[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[2] != 0) {
            dbi.select(inv.component_liner2[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[3] != 0) {
            dbi.select(inv.component_liner2[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[4] != 0) {
            dbi.select(inv.component_liner2[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[5] != 0) {
            dbi.select(inv.component_liner2[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[6] != 0) {
            dbi.select(inv.component_liner2[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[7] != 0) {
            dbi.select(inv.component_liner2[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[8] != 0) {
            dbi.select(inv.component_liner2[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner2[9] != 0) {
            dbi.select(inv.component_liner2[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }

    }

    if (inv.component_liner3[0] != 0) {

        x = 152;
        y = 292;
        if (inv.component_liner3[1] != 0) {
            dbi.select(inv.component_liner3[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[2] != 0) {
            dbi.select(inv.component_liner3[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[3] != 0) {
            dbi.select(inv.component_liner3[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[4] != 0) {
            dbi.select(inv.component_liner3[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[5] != 0) {
            dbi.select(inv.component_liner3[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[6] != 0) {
            dbi.select(inv.component_liner3[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[7] != 0) {
            dbi.select(inv.component_liner3[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[8] != 0) {
            dbi.select(inv.component_liner3[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner3[9] != 0) {
            dbi.select(inv.component_liner3[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
    }


    if (inv.component_liner4[0] != 0) {
        x = 152;
        y = 432;
        if (inv.component_liner4[1] != 0) {
            dbi.select(inv.component_liner4[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[2] != 0) {
            dbi.select(inv.component_liner4[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[3] != 0) {
            dbi.select(inv.component_liner4[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[4] != 0) {
            dbi.select(inv.component_liner4[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[5] != 0) {
            dbi.select(inv.component_liner4[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[6] != 0) {
            dbi.select(inv.component_liner4[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[7] != 0) {
            dbi.select(inv.component_liner4[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[8] != 0) {
            dbi.select(inv.component_liner4[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner4[9] != 0) {
            dbi.select(inv.component_liner4[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }

    }

    if (inv.component_liner5[0] != 0) {
        x = 152;
        y = 572;
        if (inv.component_liner5[1] != 0) {
            dbi.select(inv.component_liner5[1]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 28, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[2] != 0) {
            dbi.select(inv.component_liner5[2]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 40, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[3] != 0) {
            dbi.select(inv.component_liner5[3]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 72, y + 44, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[4] != 0) {
            dbi.select(inv.component_liner5[4]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 24, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[5] != 0) {
            dbi.select(inv.component_liner5[5]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 88, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[6] != 0) {
            dbi.select(inv.component_liner5[6]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 8, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[7] != 0) {
            dbi.select(inv.component_liner5[7]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 104, y + 76, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[8] != 0) {
            dbi.select(inv.component_liner5[8]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 60, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }
        if (inv.component_liner5[9] != 0) {
            dbi.select(inv.component_liner5[9]);
            window.draw(f.show_S(liners, lo.Texturs_matrix_mods, x + 56, y + 84, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
        }

    }


    //??????? ???
    x = 298;
    y = 13;
    if (inv.liner_list[0] != 0) {
        dbi.select(inv.liner_list[0]);       
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x , y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }
    if (inv.liner_list[1] != 0) {
        dbi.select(inv.liner_list[1]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x+140, y, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }
    if (inv.liner_list[2] != 0) {
        dbi.select(inv.liner_list[2]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y+140, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }
    if (inv.liner_list[3] != 0) {
        dbi.select(inv.liner_list[3]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x + 140, y + 140, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }
    if (inv.liner_list[4] != 0) {
        dbi.select(inv.liner_list[4]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y + 280, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }
    if (inv.liner_list[5] != 0) {
        dbi.select(inv.liner_list[5]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x + 140, y + 280, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }
    if (inv.liner_list[6] != 0) {
        dbi.select(inv.liner_list[6]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y + 420, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }
    if (inv.liner_list[7] != 0) {
        dbi.select(inv.liner_list[7]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x + 140, y + 420, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }
    if (inv.liner_list[8] != 0) {
        dbi.select(inv.liner_list[8]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x, y + 560, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }
    if (inv.liner_list[9] != 0) {
        dbi.select(inv.liner_list[9]);
        window.draw(f.show_S(liners, lo.Texturs_matrix_liners, x + 140, y + 560, dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
    }

    int cont_x = 0;
    int cont_y = 0;
    int start_x_inv = 584;
    int start_y_inv = 22;
    int count_z = 0;
    while (cont_x < 36) {
        cont_y = 0;
        while (cont_y < 21) {
            if (inv.moduls_id[count_z] != 0) {
                dbi.select(inv.moduls_id[count_z]);
                window.draw(f.show_S(liners, lo.Texturs_matrix_mods, start_x_inv + (cont_x*19), start_y_inv + (cont_y *19), dbi.active_x, dbi.active_y, dbi.active_w, dbi.active_h));
            }
            count_z++;
            cont_y++;
        }

        cont_x++;
    }

    //?????????? ????????
    window.draw(f.show_T(res1, lo.base_font, 585, 431, res1_text, 14, 0));
    window.draw(f.show_T(res1_count, lo.base_font, 705, 431, res1_count_text, 14, 0));
    window.draw(f.show_T(res2, lo.base_font, 815, 431, res2_text, 14, 0));
    window.draw(f.show_T(res2_count, lo.base_font, 935, 431, res2_count_text, 14, 0));
    window.draw(f.show_T(res3, lo.base_font, 1045, 431, res3_text, 14, 0));
    window.draw(f.show_T(res3_count, lo.base_font, 1165, 431, res3_count_text, 14, 0));


    window.draw(f.show_T(res4, lo.base_font, 585, 461, res4_text, 14, 0));
    window.draw(f.show_T(res4_count, lo.base_font, 705, 461, res4_count_text, 14, 0));
    window.draw(f.show_T(res5, lo.base_font, 815, 461, res5_text, 14, 0));
    window.draw(f.show_T(res5_count, lo.base_font, 935, 461, res5_count_text, 14, 0));
    window.draw(f.show_T(res6, lo.base_font, 1045, 461, res6_text, 14, 0));
    window.draw(f.show_T(res6_count, lo.base_font, 1165, 461, res6_count_text, 14, 0));


    window.draw(f.show_T(res7, lo.base_font, 585, 491, res7_text, 14, 0));
    window.draw(f.show_T(res7_count, lo.base_font, 705, 491, res7_count_text, 14, 0));
    window.draw(f.show_T(res8, lo.base_font, 815, 491, res8_text, 14, 0));
    window.draw(f.show_T(res8_count, lo.base_font, 935, 491, res8_count_text, 14, 0));
    window.draw(f.show_T(res9, lo.base_font, 1045, 491, res9_text, 14, 0));
    window.draw(f.show_T(res9_count, lo.base_font, 1165, 491, res9_count_text, 14, 0));


    window.draw(f.show_T(res10, lo.base_font, 585, 521, res10_text, 14, 0));
    window.draw(f.show_T(res10_count, lo.base_font, 705, 521, res10_count_text, 14, 0));
    window.draw(f.show_T(res11, lo.base_font, 815, 521, res11_text, 14, 0));
    window.draw(f.show_T(res11_count, lo.base_font, 935, 521, res11_count_text, 14, 0));
    window.draw(f.show_T(res12, lo.base_font, 1045, 521, res12_text, 14, 0));
    window.draw(f.show_T(res12_count, lo.base_font, 1165, 521, res12_count_text, 14, 0));


    window.draw(f.show_T(res13, lo.base_font, 585, 551, res13_text, 14, 0));
    window.draw(f.show_T(res13_count, lo.base_font, 705, 551, res13_count_text, 14, 0));
    window.draw(f.show_T(res14, lo.base_font, 815, 551, res14_text, 14, 0));
    window.draw(f.show_T(res14_count, lo.base_font, 935, 551, res14_count_text, 14, 0));
    window.draw(f.show_T(res15, lo.base_font, 1045, 551, res15_text, 14, 0));
    window.draw(f.show_T(res15_count, lo.base_font, 1165, 551, res15_count_text, 14, 0));


    window.draw(f.show_T(res16, lo.base_font, 585, 581, res16_text, 14, 0));
    window.draw(f.show_T(res16_count, lo.base_font, 705, 581, res16_count_text, 14, 0));
    window.draw(f.show_T(res17, lo.base_font, 815, 581, res17_text, 14, 0));
    window.draw(f.show_T(res17_count, lo.base_font, 935, 581, res17_count_text, 14, 0));
    window.draw(f.show_T(res18, lo.base_font, 1045, 581, res18_text, 14, 0));
    window.draw(f.show_T(res18_count, lo.base_font, 1165, 581, res18_count_text, 14, 0));


    window.draw(f.show_T(res19, lo.base_font, 585, 611, res19_text, 14, 0));
    window.draw(f.show_T(res19_count, lo.base_font, 705, 611, res19_count_text, 14, 0));
    window.draw(f.show_T(res20, lo.base_font, 815, 611, res20_text, 14, 0));
    window.draw(f.show_T(res20_count, lo.base_font, 935, 611, res20_count_text, 14, 0));

    window.display();
    c_e.eve(ev);
};