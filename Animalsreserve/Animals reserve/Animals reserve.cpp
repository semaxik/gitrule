#pragma once
#include <iostream>
#include "dog.hpp"
#include "cat.hpp"
#include "Pet.hpp"
void Test_works(int num, int vector1) {
	std::vector<Pet> vector;
	vector1[];
	//Задание N2
	for (auto& number : vector)
	for (int i = 0; i < vector; ++i) {
		std::cin >> vector1{ i } >> std::endl;
		std::cin >> vector >> std::endl;
		std::cout << vector << std::endl;
	}
	//Задание N3
	vector[1]{ 3 };
	vector.find_num(3);
	if (vector.find_num(3) == true) {
		std::cout << "Найдено";
	}
}
//Задание N3
bool find_num(std::vector<int>& const num, int num_find) {
	for (auto& number : num) {
		if (number == num_find) {
			return true;
		}
	}
	return false;
}
int main() {

}