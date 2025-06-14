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
	std::string name;

	PetId id = generate_id();
public:
	Pet(std::string name)
		: name(name) {
	}
	virtual void feed(int hours, int minutes) = 0;
	virtual void sleep(int hours, int minutes) = 0;
	virtual void walk(int hours, int minutes) = 0;
	virtual void add_enemy(const Pet& enemy) {
		enemies.push_back(enemy.id);
	}
	void add_friend(const Pet& _friend) {
		friends.push_back(_friend.id);
	}
};