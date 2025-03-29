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

unsigned int total(unsigned char first, unsigned char second) {
	return first + second;
}
int none = 10;
void print_array(int* numbers, int number_count) {
	int none = 11;
	for (int i = 0;i < number_count;++i) {
		std::cout << numbers[i] << std::endl;
	}
}
enum class operation : char {
	quit = 'q', 
	shift_right = '+',
	shift_left = '-'
};
operation get_operation() {
	char buf;
	std::cout << "select operation" << std::endl;
	std::cout << "the operation can be: [+] - shift to the right, [-] - shift to the left, [q] - exit" << std::endl;
	std::cin >> buf;
	return (operation)buf;
}
void shift_right(int* array, size_t len) {
	auto buffer = array[0];
	for (int i = 0;i < len - 1; ++i) {
		array[i] = array[i + 1];
	}
	array[len - 1] = buffer;
}
void shift_left(int* array, size_t len) {
	int buffer = array[len - 1];
	for (int i = len - 1; i > 0; --i) {
		array[i] = array[i - 1];
	}
	array[0] = buffer;
}
void sell(std::string name, int age, std::string breed) {
	
};
void print_receipt(std::string name, int age) {

};
class Size {
public:
	int width;
	int height;
	Size(int width, int height)
		: width(width), height(height) {}
};

class Paper {
private:
	bool flexibility;
	Size size;

public:
	Paper(bool flex, Size size)
		: flexibility(flex), size(size) {}

	void printInfo() const {
		std::cout << "Paper Info:";
		std::cout << "Flexibility: " << (flexibility ? "Flexible" : "Stiff");
		std::cout << "Size: " << size.width << " x " << size.height;
	}
};
	
int main() {
	/*int number;

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
	print_array(reversed_numbers, std::size(reversed_numbers));*/


	int num_a = 1;
	int num_b = 2;
	int num_c = 3;
	int buffer = 0;
	int just_a_normal_array[3]{ num_a, num_b, num_c };

	auto selected_operation = get_operation();
	while (selected_operation != operation::quit) {
		switch (selected_operation) {
			case operation::shift_right:
			shift_right(just_a_normal_array, std::size(just_a_normal_array));
			print_array(just_a_normal_array, std::size(just_a_normal_array));
				break;
			case operation::shift_left:
			shift_left(just_a_normal_array, std::size(just_a_normal_array));
			print_array(just_a_normal_array, std::size(just_a_normal_array));
				break;
		}
		selected_operation = get_operation();
	}
	std::cout << "ok, have a nice day or evening" << std::endl;
	return 0;
		new int* [3] {just_a_normal_array};
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