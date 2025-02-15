// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

bool is_even(int number)
{
	return ((number/2)*2) == number;
}

bool is_even_1(int number)
{
	return number % 2 == 0;
}

unsigned int total(unsigned char first, unsigned char second)
{
	return first + second;
}
const int array_size = 4;
int none = 10;
void print_array(int* numbers, int number_count) {
	int none = 11;
	for (int i = 0;i < number_count;++i) {
		std::cout << numbers[i] << std::endl;
	}
	void Function(int& a, int& b) {
		a = b;
		b = a;
}
int main()
{
	int number;

	int numbers[3];

	for (int i = 0; i < std::size(numbers);++i) {
		std::cin >> number;
		numbers[i] = number;
	}
	print_array(numbers, std::size(numbers));
	int reversed_numbers[std::size(numbers)];
	int last_index = std::size(numbers) - 1;
	for (int i = 0; i < std::size(numbers); ++i) {
		reversed_numbers[last_index - i] = numbers[i];

	}
	print_array(reversed_numbers, std::size(reversed_numbers));


	int num_a = 1;
	int num_b = 2;
	int num_c = 3;
	int buffer = 0;
	int just_a_normal_array[3]{ num_a, num_b, num_c };
	char operation;
	std::cin >> operation;
    while (operation == '+') {
		buffer = just_a_normal_array[0];
		for (int i = 0;i < std::size(just_a_normal_array)-1; ++i) {
			just_a_normal_array[i] = just_a_normal_array[i + 1];
		}
		just_a_normal_array[std::size(just_a_normal_array) - 1] = buffer;
		print_array(just_a_normal_array, std::size(just_a_normal_array));
		return 0;
	}
	while (operation == 'q') {
		std::cout << "oke" << std::endl;
		return 0;
	}
	new int*[3]{just_a_normal_array};
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"
// Советы по началу работы 

//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.