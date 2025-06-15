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

bool find_pair_of_numbers_in_vector_two_pointers(std::vector<int> numbers, int number_to_find) {
	int left = 0;
	int right = numbers.size() - 1;
	while (left < right) {
		int left_number = numbers[left];
		int right_number = numbers[right];
		if (left_number + right_number == number_to_find) {
			std::cout << left_number << " + " << right_number << std::endl;
			return true;
		}
		if (left_number + right_number > number_to_find) {
			right--;
		}
		else {
			left++;
		}
	}
	return false;
}

bool find_pair_of_numbers_in_vector_naive(std::vector<int> numbers, int number_to_find) {
	for (int k = 0; k < numbers.size(); ++k) {
		for (int i = 0; i < numbers.size(); ++i) {
			int left_number = numbers[k];
			int right_number = numbers[i];
			if (left_number + right_number == number_to_find && left_number != right_number) {
				std::cout << left_number << " + " << right_number << std::endl;
				return true;
			}
		}
	}

	return false;
};

int sum(int a, int b) {
	return a + b;
}

void print(int number) {
	std::cout << number << std::endl;
}
void print(double number) { // перегруженная функция для чисел с плавающей точкой
	std::cout << number << std::endl;
}
void print(unsigned long number) { // перегруженная функция для беззнаковых "длинных" целых
	std::cout << number << std::endl;
}
void print(std::string string) { //перегруженная функция для строк
	std::cout << string << std::endl;
}

int main() {
	double a_floating = 1.5;
	int a_number = 10;
	unsigned long a_long_number = 0xFFFFFFFF;
	std::string a_string = "10";

	print(a_number);
	print(a_floating);
	print(a_long_number);
	print(a_string);

	std::vector<int> numbers = { 1,2,3,4 };
	int number_to_find;

	std::cout << "number to find a pair for: "; //перед тем как что-то запрашивать надо дать знать пользователю
	//что от него требуется
	std::cin >> number_to_find;

	find_pair_of_numbers_in_vector_two_pointers(numbers, number_to_find);
	find_pair_of_numbers_in_vector_naive(numbers, number_to_find);
}