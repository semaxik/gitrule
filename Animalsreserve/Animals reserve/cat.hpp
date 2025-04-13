#pragma once
#include <iostream>
class Cat : public catPet {
public:
    void feed (int hours, int minutes) override {
        std::cout << "Кошка покормлена в " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }

    void sleep (int hours, int minutes) override {
        std::cout << "Кошка спит с " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }

    void walk(int hours, int minutes) override {
        std::cout << "Кошку надо выгулять в " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }
    void friends(char friends, char enemyes, int murzik, int vasya, int lio) override {
        std::cout << "кто враг мурзика?" << std::endl;
            std::cin >> enemyes;
            if (enemyes == 'в' + 'а' + 'с' + 'я' or 'л' + 'и' + 'о') {
                std::cout << "с ним гулять нельзя" << std::endl;
            }
        std::cout << "кто враг васи?" << std::endl;
            std::cin >> enemyes;
            if (enemyes == 'м' + 'у' + 'р' + 'з' + 'и' + 'к' or 'л' + 'и' + 'о') {
                std::cout << "с ним гулять нельзя" << std::endl;
            }
        std::cout << "кто враг лио?" << std::endl;
            std::cin >> enemyes;
            if (enemyes == 'в' + 'а' + 'с' + 'я' or 'м' + 'у' + 'р' + 'з' + 'и' + 'к') {
                std::cout << "с ним гулять нельзя" << std::endl;
            }
    }
};
