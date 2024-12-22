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

void print_array(int* numbers, int number_count) {
	for (int i = 0;i < number_count;++i) {
		std::cout << numbers[i] << std::endl;
	}
}
int main()
{
	int none = 8;
	int flash = 2;
	if (is_even_1(flash)) {
		std::cout << "ok" << std::endl;
	}
	if (is_even(none)) {
		std::cout << "ok" << std::endl;
	}
	int massive[]{ 0,1,2,3,2000 };
	
		
	print_array(massive, std::size(massive));

	int SILENT[]{ 1,2,3 };
	std::cin >> flashlight >> std::endl;
	for (i < 4 ; i)


	
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