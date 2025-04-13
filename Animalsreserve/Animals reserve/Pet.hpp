#pragma once
#include <iostream>
class catPet {
public:
	virtual void feed(int hours, int minutes) = 0;
	virtual void sleep(int hours, int minutes) = 0;
	virtual void walk(int hours, int minutes) = 0;
	virtual void friends(char friends, char enemyes, int murzik, int vasya, int lio) = 0;
	virtual ~catPet() {}
};
class dogPet {
public:
	dogPet() {}

	std::string name;

	dogPet(std::string name)
		:name(name) {
	};
	virtual void feed(int hours, int minutes) {};
	virtual void sleep(int hours, int minutes) {};
	virtual void walk(int hours, int minutes) {};
	virtual ~dogPet() {}
};