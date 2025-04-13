#pragma once
#include <iostream>
#include "Pet.hpp"

class Dog : public dogPet {
	dogPet enemies[10];
public:
	Dog() {}

	Dog(std::string name)
		:dogPet(name) {
	}

	void feed(int hours, int minutes) override {
		std::cout << "������ ���������� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
	}

	void sleep(int hours, int minutes) override {
		std::cout << "������ ���� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
	}

	void walk(int hours, int minutes) override {
		std::cout << "������ �������� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
	}

	void add_enemy(const Dog& enemy) {
		//TOOD
	}

	bool has_enemy(const Dog& enemy) {
		return false;//TOOD
	}
};