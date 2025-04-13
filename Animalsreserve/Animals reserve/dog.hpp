#pragma once
#include <iostream>
#include "Pet.hpp"
class Dog : public dogPet {
public:
    void feed(int hours, int minutes) override {
        std::cout << "������ ���������� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }

    void sleep(int hours, int minutes) override {
        std::cout << "������ ���� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }

    void walk(int hours, int minutes) override {
        std::cout << "������ �������� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }
    void friends(char friends, char enemyes, int barbos, int shah, int bobik) override {
        std::cout << "��� ���� ������?" << std::endl;
        std::cin >> enemyes;
        if (enemyes == '�' + '�' + '�' + '�' + '�' + '�' or '�' + '�' + '�') {
            std::cout << "� ��� ������ ������" << std::endl;
        }
        std::cout << "��� ���� �������?" << std::endl;
        std::cin >> enemyes;
        if (enemyes == '�' + '�' + '�' + '�' + '�' or '�' + '�' + '�') {
            std::cout << "� ��� ������ ������" << std::endl;
        }
        std::cout << "��� ���� ����?" << std::endl;
        std::cin >> enemyes;
        if (enemyes == '�' + '�' + '�' + '�' + '�' or '�' + '�' + '�' + '�' + '�' + '�') {
            std::cout << "� ��� ������ ������" << std::endl;
        }
    }
};