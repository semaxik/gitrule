#pragma once
#include <iostream>
#include "Pet.hpp"
class Dog : public dogPet {
public:
    void feed(int hours, int minutes) override {
        std::cout << "—обака покормлена в " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }

    void sleep(int hours, int minutes) override {
        std::cout << "—обака спит с " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }

    void walk(int hours, int minutes) override {
        std::cout << "—обаку выгул€ют в " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }
    void friends(char friends, char enemyes, int barbos, int shah, int bobik) override {
        std::cout << "кто враг бобика?" << std::endl;
        std::cin >> enemyes;
        if (enemyes == 'б' + 'а' + 'р' + 'б' + 'о' + 'с' or 'ш' + 'а' + 'х') {
            std::cout << "с ним гул€ть нельз€" << std::endl;
        }
        std::cout << "кто враг барбоса?" << std::endl;
        std::cin >> enemyes;
        if (enemyes == 'б' + 'о' + 'б' + 'и' + 'к' or 'ш' + 'а' + 'х') {
            std::cout << "с ним гул€ть нельз€" << std::endl;
        }
        std::cout << "кто враг шаха?" << std::endl;
        std::cin >> enemyes;
        if (enemyes == 'б' + 'о' + 'б' + 'и' + 'к' or 'б' + 'а' + 'р' + 'б' + 'о' + 'с') {
            std::cout << "с ним гул€ть нельз€" << std::endl;
        }
    }
};