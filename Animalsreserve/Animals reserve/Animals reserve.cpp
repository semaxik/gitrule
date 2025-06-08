#pragma once
#include <iostream>
#include "dog.hpp"
#include "cat.hpp"
#include "Pet.hpp"

bool find_number(std::vector<int>& const num, int num_find) {
	for (auto& number : num) {
		if (number == num_find) {
			return true;
		}
	}
	return false;
}

void test_work_2() {
	std::vector<int> numbers;
	int number_count;
	int buffer;

	std::cin >> number_count;

	for (int i = 0; i < number_count; ++i) {
		std::cin >> buffer;
		numbers.push_back(buffer);
	}

	for (int i = 0; i < numbers.size(); ++i) {
		std::cout << numbers[i] << std::endl;
	}
}

void test_work_3() {
	std::vector<int> numbers;
	int number_count;
	int buffer;
	int what_to_find;

	std::cin >> number_count;
	for (int i = 0; i < number_count; ++i) {
		std::cin >> buffer;
		numbers.push_back(buffer);
	}
	std::cin >> what_to_find;
	if (find_number(numbers, what_to_find)) {
		std::cout << "Найдено";
	}
	else {
		std::cout << "Не найдено";
	}
}

int main() {
}