#pragma once
#include <iostream>
class Cat : public catPet {
public:
    void feed (int hours, int minutes) override {
        std::cout << "����� ���������� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }

    void sleep (int hours, int minutes) override {
        std::cout << "����� ���� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }

    void walk(int hours, int minutes) override {
        std::cout << "����� ���� �������� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }
    void friends(char friends, char enemyes, int murzik, int vasya, int lio) override {
        std::cout << "��� ���� �������?" << std::endl;
            std::cin >> enemyes;
            if (enemyes == '�' + '�' + '�' + '�' or '�' + '�' + '�') {
                std::cout << "� ��� ������ ������" << std::endl;
            }
        std::cout << "��� ���� ����?" << std::endl;
            std::cin >> enemyes;
            if (enemyes == '�' + '�' + '�' + '�' + '�' + '�' or '�' + '�' + '�') {
                std::cout << "� ��� ������ ������" << std::endl;
            }
        std::cout << "��� ���� ���?" << std::endl;
            std::cin >> enemyes;
            if (enemyes == '�' + '�' + '�' + '�' or '�' + '�' + '�' + '�' + '�' + '�') {
                std::cout << "� ��� ������ ������" << std::endl;
            }
    }
};
