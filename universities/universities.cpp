// поменять кодировку !
#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"
#include "menu_items.hpp"

int main () {
    std::setlocale(LC_ALL, "");

    const hlr::MenuItem* current = &hlr::MAIN;
    
    do {
        current = current->func(current);
    } while (true);

    return 0;
}