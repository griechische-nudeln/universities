#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const hlr::MenuItem hlr::UNIVERSITIES_SPBGU = {
    "1 - СПбГУ", hlr::universities_spbgu, &hlr::UNIVERSITIES
};
const hlr::MenuItem hlr::UNIVERSITIES_ITMO = {
    "2 - ИТМО ", hlr::universities_itmo, &hlr::UNIVERSITIES
};
const hlr::MenuItem hlr::UNIVERSITIES_POLITEX = {
    "3 - Политех", hlr::universities_politex, &hlr::UNIVERSITIES
};
const hlr::MenuItem hlr::UNIVERSITIES_LETI = {
    "4 - ЛЭТИ", hlr::universities_leti, &hlr::UNIVERSITIES
};
const hlr::MenuItem hlr::UNIVERSITIES_GO_BACK = {
    "0 - ВЫйти в главное меню", hlr::universities_go_back, &hlr::UNIVERSITIES
};

namespace {
    const hlr::MenuItem* const universities_children[] = {
        &hlr::UNIVERSITIES_GO_BACK,
        &hlr::UNIVERSITIES_SPBGU,
        &hlr::UNIVERSITIES_ITMO,
        &hlr::UNIVERSITIES_POLITEX,
        &hlr::UNIVERSITIES_LETI,
    };
    const int universities_size = sizeof(universities_children) / sizeof(universities_children[0]);
}

const hlr::MenuItem hlr::UNIVERSITIES = {
    "1 -Посмотреть университеты Санкт-Петербурга ", hlr::show_menu, &hlr::MAIN, universities_children, universities_size
};
const hlr::MenuItem hlr::EXIT = {
    "0 - Я уже студент", hlr::show_menu, hlr::exit, &hlr::MAIN
};

namespace {
    const hlr::MenuItem* const main_children[] = {
        &hlr::EXIT,
        &hlr::UNIVERSITIES
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const hlr::MenuItem hlr::MAIN = {
    nullptr, hlr::show_menu, nullptr, main_children, main_size
};

