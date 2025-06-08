#pragma once
#include <iostream>
#include "Pet.hpp"

class Dog : public Pet {
public:
	Dog() {}

	Dog(std::string name)
		:Pet(name) {
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