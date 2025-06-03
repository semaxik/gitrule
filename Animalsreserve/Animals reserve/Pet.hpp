#pragma once
#include <iostream>
#include <vector>

auto make_id_generator() {
	static int count = 0;
	return [&]() {
		return ++count;
		};
}
auto generate_id = make_id_generator();

using PetId = int;

class Pet {
private:
	std::vector<PetId> enemies;
	std::vector<PetId> friends;

	PetId id = generate_id();
public:
	virtual void feed(int hours, int minutes) = 0;
	virtual void sleep(int hours, int minutes) = 0;
	virtual void walk(int hours, int minutes) = 0;
	virtual void friends(char friends, char enemyes) = 0;
	virtual void add_enemy(const Pet& enemy, Pet pet, int num) {
		//Задание N1
		std::vector<Pet> enemies;
		enemies.push_back(pet);
	}
	virtual void add_friend(const Pet& _friend) {
		friends.push_back(_friend.id);
	}
	virtual void Test_works(int num, int vector1) {
		std::vector<Pet> vector;
		vector1[];
		//Задание N2
		for (auto& number : vector) {
			std::cin >> vector1{ i } >> std::endl;
			std::cin >> vector >> std::endl;
			std::cout << vector << std::endl;
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
};