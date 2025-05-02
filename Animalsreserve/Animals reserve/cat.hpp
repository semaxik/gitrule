#pragma once
#include <iostream>
#include "Pet.hpp"
class Cat : public Pet {
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
    void friends(const char friends, char enemyes, const char murzik, const char lio, const char vasya) override {
		
		Cat murzik("murzik");
		Cat lio("lio");
		Cat vasya("vasya");

		Cat murzik.add_enemy(lio);
		if (Cat murzik.has_enemy(lio)) {
			std::cout << "������ ������, ����!!!" << std::endl;
		}
		else {
			std::cout << "������ �����" << std::endl;
		};

		if (Cat murzik.has_enemy(vasya)) {
			std::cout << "������ ������, ����!!!" << std::endl;
		}
		else {
			std::cout << "������ �����" << std::endl;
		};
		Cat vasya.add_enemy(murzik);
		if (Cat vasya.has_enemy(lio)) {
			std::cout << "������ ������, ����!!!" << std::endl;
		}
		else {
			std::cout << "������ �����" << std::endl;
		};

		if (Cat vasya.has_enemy(murzik)) {
			std::cout << "������ ������, ����!!!" << std::endl;
		}
		else {
			std::cout << "������ �����" << std::endl;
		};
		Cat lio.add_enemy(murzik);
		if (Cat lio.has_enemy(murzik)) {
			std::cout << "������ ������, ����!!!" << std::endl;
		}
		else {
			std::cout << "������ �����" << std::endl;
		};

		if (Cat lio.has_enemy(vasya)) {
			std::cout << "������ ������, ����!!!" << std::endl;
		}
		else {
			std::cout << "������ �����" << std::endl;
		};
}