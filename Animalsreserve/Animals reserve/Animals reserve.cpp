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

//void test_work_2() {
//	std::vector<int> numbers;
//	int number_count;
//	int buffer;
//
//	std::cin >> number_count;
//
//	for (int i = 0; i < number_count; ++i) {
//		std::cin >> buffer;
//		numbers.push_back(buffer);
//	}
//
//	for (int i = 0; i < numbers.size(); ++i) {
//		std::cout << numbers[i] << std::endl;
//	}
//}
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
		for (int i = 0; i < numbers.size(); ++i) {
			if (number1 + numbers[i] == number_to_find) {
				std::cout << number1, '+', numbers[i];
				return true;
			}
		}
	}
	return false;
};
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
int sum_of_all_elements_of_array_or_vector_of_int_numbers(std::vector<int> vector) {
	int sum = 0;
	for (int i = 0; i < size(vector); i++) {
		sum += vector[i];
		std::cout << sum << std::endl;
	}
	return 0;
}
int sum_of_all_elements_of_array_or_vector_of_double_numbers(std::vector<double> vector) {
	double sum = 0;
	for (int i = 0; i < size(vector); i++) {
		sum += vector[i];
		std::cout << sum << std::endl;
	}
	return 0;
}
void break_vector_by_2_vectors(std::vector<int> vector) {
	int number_;
	std::vector<int> vector_with_smaller_numbers;
	std::vector<int> vector_with_biger_numbers;

	std::cin >> number_;
	for (auto& numbers : vector) {
		if (vector[numbers] < number_) {
			vector_with_smaller_numbers.push_back(vector[numbers]);
			std::cout << vector_with_smaller_numbers;
		}
		if (vector[numbers] > number_) {
			vector_with_biger_numbers.push_back(vector[numbers]);
			std::cout << vector_with_biger_numbers;
		}
	}
};
int main() {
	/*double a_floating = 1.5;
	int a_number = 10;
	unsigned long a_long_number = 0xFFFFFFFF;
	std::string a_string = "10";*/
	std::vector<int> vector{ 1, 4, 6 };
	std::vector<double> vector_double{ 1.2, 4.0, 6.8 };
	std::vector<int> vector_{ 1, 4, 6 };

	/*print(a_number);
	print(a_floating);
	print(a_long_number);
	print(a_string);

	std::vector<int> numbers = { 1,2,3,4 };
	int number_to_find;*/

	//std::cout << "number to find a pair for: "; //перед тем как что-то запрашивать надо дать знать пользователю
	////что от него требуется
	//std::cin >> number_to_find;

	/*find_pair_of_numbers_in_vector_two_pointers(numbers, number_to_find);
	find_pair_of_numbers_in_vector_naive(numbers, number_to_find);*/
	sum_of_all_elements_of_array_or_vector_of_int_numbers(vector);
	sum_of_all_elements_of_array_or_vector_of_double_numbers(vector_double);
	break_vector_by_2_vectors(vector_);
}