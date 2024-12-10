#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const hlr::MenuItem hlr::UNIVERSITIES_SPBGU_PM = {
    "1 - ПМ-ПУ", hlr::universities_spbgu_pm, &hlr::UNIVERSITIES_SPBGU
};
const hlr::MenuItem hlr::UNIVERSITIES_SPBGU_MM = {
    "2 - МатМех ", hlr::universities_spbgu_mm, &hlr::UNIVERSITIES_SPBGU
};
const hlr::MenuItem hlr::UNIVERSITIES_SPBGU_LL = {
    "3 - Лингвистический", hlr::universities_spbgu_ll, &hlr::UNIVERSITIES_SPBGU
};
const hlr::MenuItem hlr::UNIVERSITIES_GO_BACK_SPBGU = {
    "0 - ВЫйти в предыдущее меню ", hlr::universities_go_back_spbgu, &hlr::UNIVERSITIES_SPBGU
};
 
//-?
namespace {
    const hlr::MenuItem* const universities_children_spbgu[] = {
        &hlr::UNIVERSITIES_GO_BACK_SPBGU,
        &hlr::UNIVERSITIES_SPBGU_PM,
        &hlr::UNIVERSITIES_SPBGU_MM,
        &hlr::UNIVERSITIES_SPBGU_LL,
    };
    const int universities_size_spbgu = sizeof(universities_children_spbgu) / sizeof(universities_children_spbgu[0]);
}ы


const hlr::MenuItem hlr::UNIVERSITIES_SPBGU = {
    "1 - СПбГУ", hlr::universities_spbgu, &hlr::UNIVERSITIES, universities_children_spbgu, universities_size_spbgu
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
 
//-?
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
    "0 - Я уже студент", hlr::exit, &hlr::MAIN
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

