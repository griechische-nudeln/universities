#include <clocale>
#include <iostream>

int main () {
    std::setlocale(LC_ALL, "");
    
    int user_input;
    do {
        std::cout << "Ну здарова, отец" << std::endl;
        std::cout << "1 - Посмотреть университеты Санкт-Петербурга" << std::endl;
        std::cout << "0 - Я уже студент" << std::endl;
        std::cout << "Обучайка > " << std::endl;

        std::cin >> user_input;
        if (user_input == 1) {
            //todo
        }
        else if (user_input == 0) {
            exit(0);
        }
        std::cout << std::endl;
    } while (true);

    return 0;
}