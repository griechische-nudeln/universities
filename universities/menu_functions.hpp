#include "menu.hpp"

namespace hlr {
    const MenuItem* show_menu(const MenuItem* current);
    const MenuItem* exit(const MenuItem* current);
    
    const MenuItem* universities_spbgu(const MenuItem* current);
    const MenuItem* universities_itmo(const MenuItem* current);
    const MenuItem* universities_politex(const MenuItem* current); 
    const MenuItem* universities_leti(const MenuItem* current);
    const MenuItem* universities_go_back(const MenuItem* current);

    const MenuItem* universities_go_back_spbgu(const MenuItem* current);
    const MenuItem* universities_spbgu_pm(const MenuItem* current); 
    const MenuItem* universities_spbgu_mm(const MenuItem* current);
    const MenuItem* universities_spbgu_ll(const MenuItem* current);
}