#pragma once
#include <iostream>
#include "Pet.hpp"
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
	void add_enemy(const Cat& enemy) {
		

	}
    void friends(const char friends, char enemyes, const char murzik, const char lio, const char vasya) override {
		
		Cat murzik("murzik");
		Cat lio("lio");
		Cat vasya("vasya");

		Cat murzik.add_enemy(catPet lio);
		if (Cat murzik.has_enemy(catPet lio)) {
			std::cout << "гулять нельзя, враг!!!" << std::endl;
		}
		else {
			std::cout << "гулять можно" << std::endl;
		};

		if (Cat murzik.has_enemy(vasya)) {
			std::cout << "гулять нельзя, враг!!!" << std::endl;
		}
		else {
			std::cout << "гулять можно" << std::endl;
		};
		Cat vasya.add_enemy(murzik);
		if (Cat vasya.has_enemy(lio)) {
			std::cout << "гулять нельзя, враг!!!" << std::endl;
		}
		else {
			std::cout << "гулять можно" << std::endl;
		};

		if (Cat vasya.has_enemy(murzik)) {
			std::cout << "гулять нельзя, враг!!!" << std::endl;
		}
		else {
			std::cout << "гулять можно" << std::endl;
		};
		Cat lio.add_enemy(murzik);
		if (Cat lio.has_enemy(murzik)) {
			std::cout << "гулять нельзя, враг!!!" << std::endl;
		}
		else {
			std::cout << "гулять можно" << std::endl;
		};

		if (Cat lio.has_enemy(vasya)) {
			std::cout << "гулять нельзя, враг!!!" << std::endl;
		}
		else {
			std::cout << "гулять можно" << std::endl;
		};
}