#pragma once
#include <iostream>
#include "Pet.hpp"
class Cat : public Pet {
public:
	Cat(std::string name)
		:Pet(name) {
	}
	void feed(int hours, int minutes) override {
		std::cout << "����� ���������� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
	}

	void sleep(int hours, int minutes) override {
		std::cout << "����� ���� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
	}

	void walk(int hours, int minutes) override {
		std::cout << "����� ���� �������� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
	}
};