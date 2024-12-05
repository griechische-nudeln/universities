#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

void hlr::exit() {
    std::exit(0);
}
 
const hlr::MenuItem* hlr::show_menu(const MenuItem* current) {
    std::cout << "Ну здарова, отец." << std::endl; 
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}
const hlr::MenuItem* hlr::exit(const MenuItem* current){
    std::exit(0);
}

const hlr::MenuItem* hlr::universities_spbgu(const MenuItem* current) {
    //todo
    std::cout << current->title << std::endl;
    return current->parent;
}

const hlr::MenuItem* hlr::universities_itmo(const MenuItem* current) {
    //todo
    std::cout << current->title << std::endl;
    return current->parent;
}

const hlr::MenuItem* hlr::universities_politex(const MenuItem* current) {
    //todo
    std::cout << current->title << std::endl;
    return current->parent;
}

const hlr::MenuItem* hlr::universities_leti(const MenuItem* current) {
    //todo
    std::cout << current->title << std::endl;
    return current->parent;
}

const hlr::MenuItem* hlr::universities_go_back(const MenuItem* current) {
    //todo
    return current->parent->parent;
}
