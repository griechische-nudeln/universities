// поменять кодировку !
#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

int main () {
    std::setlocale(LC_ALL, "");

    hlr::MenuItem universities_spbgu = {"1 - СПбГУ", hlr::universities_spbgu};
    hlr::MenuItem universities_itmo = {"2 - ИТМО", hlr::universities_itmo};
    hlr::MenuItem universities_politex = {"3 - Политех", hlr::universities_politex};
    hlr::MenuItem universities_leti = {"4 - ЛЭТИ", hlr::universities_leti};
    hlr::MenuItem universities_go_back = {"5 - Выйти в главное меню", hlr::universities_go_back};

    hlr::MenuItem* universities_children[] = {
        &universities_go_back,
        &universities_spbgu,
        &universities_itmo,
        &universities_politex,
        &universities_leti
    };
    const int universities_size = sizeof(universities_children) / sizeof(universities_children[0]);

    hlr::MenuItem universities = {"1 - Посмотреть университеты Санкт-Петербурга", hlr::show_menu, universities_children, universities_size};
    hlr::MenuItem exit = {"0 - Я уже студент", hlr::exit};
    
    hlr::MenuItem* main_children[] = { &exit, &universities};
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);

    hlr::MenuItem main = {nullptr, hlr::show_menu, main_children, main_size};
    
    universities_spbgu.parent = &universities;
    universities_itmo.parent = &universities;
    universities_politex.parent = &universities;
    universities_leti.parent = &universities;
    universities_go_back.parent = &universities;

    universities.parent = &main;
    exit.parent = &main;

    const hlr::MenuItem* current = &main;
    int user_input;
    do {
        current = current->func(current);
    } while (true);

    return 0;
}