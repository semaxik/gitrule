#pragma once
#include <iostream>
#include <vector>
class Pet {
private:
	int enemy_count = 0;
	Pet enemyes1[];
	int friend_count = 0;
	Pet friends1[];

public:
	virtual void feed(int hours, int minutes) = 0;
	virtual void sleep(int hours, int minutes) = 0;
	virtual void walk(int hours, int minutes) = 0;
	virtual void friends(char friends, char enemyes) = 0;
	virtual void add_enemy(const Pet& enemy, Pet pet, int num) {
		//Задание N1
		template <typename Pet>;
		std::vector<Pet> enemies;
		enemies.push_back(pet);
		//Задание N2
		for (int i = 0; i < enemies; ++i) {
			std::cin >> enemyes1{i} >> std::endl;
		}
		std::cin >> enemies >> std::endl;
		for (int i = 0; i < enemies; ++i) {
			std::cout << enemies << std::endl;
		}
		for (auto& number : enemies) {
			std::cout << number << std::endl;
		}
		//Задание N3
		for (int i = 0; i < enemies; ++i) {
			std::cin >> num >> std::endl;
			if (enemies[i] == num) {
				std::cout << "Найдено" << std::endl;
			}
			else {
				std::cout << "Не найдено" << std::endl;
			}
		}
	}
	virtual void add_friend(const Pet& friends, Pet pet, int num) {
	
};