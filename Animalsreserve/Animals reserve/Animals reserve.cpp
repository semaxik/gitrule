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
<<<<<<< HEAD
//void Test_work_3() {
//	std::vector<int> numbers;
//	int number_count;
//	int buffer;
//	int what_to_find;
//	
//	std::cin >> number_count;
//	for (int i = 0; i < number_count; ++i) {
//		std::cin >> buffer;
//		numbers.push_back(buffer);
//	}
//	std::cin >> what_to_find;
//	if (find_number_in_vector(numbers, what_to_find)) {
//			std::cout << "Найдено";
//	}
//	else {
//			std::cout << "Не найдено";
//	}
//}
//bool find_number_in_vector(std::vector<int> & const numbers, int number_to_find) {
//	for (auto& number : numbers) {
//		if (number == number_to_find) {
//			return true;
//		}
//	}
//	return false;
//}
bool find_pair_of_numbers_in_vector(std::vector<int> numbers, int number_to_find, int number1, int number2) {
	std::cin >> number_to_find;
	for (number1 = 0; number1 < numbers.size(); ++number1) {
		
	}
	for (int i = 0; i < numbers.size(); ++i) {
		if (number1 + numbers[i] == number_to_find) {
			std::cout << number1, '+', numbers[i];
		}
	}
	return true;
};
int main() {
	std::vector<int> numbers;
	int number_to_find;
	int number1;
	int number2;
	find_pair_of_numbers_in_vector(numbers, number_to_find, number1, number2);
=======

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
>>>>>>> f7f0223d222880f76504b65fe9792015d034ca7d
}