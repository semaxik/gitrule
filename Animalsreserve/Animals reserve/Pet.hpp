#pragma once
#include <iostream>
class Pet {
private:
	int enemy_count = 0;
	Pet enemyes[10];
	int friend_count = 0;
	Pet friends[10];

public:
	virtual void feed(int hours, int minutes) = 0;
	virtual void sleep(int hours, int minutes) = 0;
	virtual void walk(int hours, int minutes) = 0;
	virtual void friends(char friends, char enemyes) = 0;
	virtual void add_enemy(const Pet& enemy) {
		enemyes[enemy_count] = enemy;
		++enemy_count;
		if (enemy_count > 10) {
			std::cout << "Переполнение врагов" << std::endl;
		}
	}
	virtual void add_friend(const Pet& friends) {
		friends[friend_count] = friends;
		++friend_count;
		if (friend_count > 10) {
			std::cout << "Переполнение друзей" << std::endl;
	}
};
