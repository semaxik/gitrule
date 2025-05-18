#pragma once
#include <iostream>
#include "dog.hpp"
#include "cat.hpp"
int main() {
	Dog bobik("bobik");
	Dog shah("shah");
	Dog barbos("barbos");
	bobik.add_enemy(shah);
	if (bobik.has_enemy(shah)) {
		std::cout << "гулять нельзя, враг!!!"<<std::endl;
	}
	else {
		std::cout << "гулять можно" << std::endl;
	};

	if (bobik.has_enemy(barbos)) {
		std::cout << "гулять нельзя, враг!!!" << std::endl;
	}
	else {
		std::cout << "гулять можно" << std::endl;
	};
}