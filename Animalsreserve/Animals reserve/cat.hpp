#pragma once
#include <iostream>
#include "Pet.hpp"
class Cat : public Pet {
public:
<<<<<<< HEAD
=======
	Cat(std::string name)
		:Pet(name) {
	}
>>>>>>> f7f0223d222880f76504b65fe9792015d034ca7d
	void feed(int hours, int minutes) override {
		std::cout << "����� ���������� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
	}

	void sleep(int hours, int minutes) override {
		std::cout << "����� ���� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
	}
<<<<<<< HEAD

	void walk(int hours, int minutes) override {
		std::cout << "����� ���� �������� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
	}
	//  void friends(const char friends, char enemyes, const char murzik, const char lio, const char vasya) override {
		  //
		  //Cat murzik("murzik");
		  //Cat lio("lio");
		  //Cat vasya("vasya");

		  //murzik.add_enemy(lio);
		  //if (murzik.has_enemy(lio)) {
		  //	std::cout << "������ ������, ����!!!" << std::endl;
		  //}
		  //else {
		  //	std::cout << "������ �����" << std::endl;
		  //};

		  //if (Cat murzik.has_enemy(vasya)) {
		  //	std::cout << "������ ������, ����!!!" << std::endl;
		  //}
		  //else {
		  //	std::cout << "������ �����" << std::endl;
		  //};
		  //Cat vasya.add_enemy(murzik);
		  //if (Cat vasya.has_enemy(lio)) {
		  //	std::cout << "������ ������, ����!!!" << std::endl;
		  //}
		  //else {
		  //	std::cout << "������ �����" << std::endl;
		  //};

		  //if (Cat vasya.has_enemy(murzik)) {
		  //	std::cout << "������ ������, ����!!!" << std::endl;
		  //}
		  //else {
		  //	std::cout << "������ �����" << std::endl;
		  //};
		  //Cat lio.add_enemy(murzik);
		  //if (Cat lio.has_enemy(murzik)) {
		  //	std::cout << "������ ������, ����!!!" << std::endl;
		  //}
		  //else {
		  //	std::cout << "������ �����" << std::endl;
		  //};

		  //if (Cat lio.has_enemy(vasya)) {
		  //	std::cout << "������ ������, ����!!!" << std::endl;
		  //}
		  //else {
		  //	std::cout << "������ �����" << std::endl;
		  //};
=======
	void walk(int hours, int minutes) override {
		std::cout << "����� ���� �������� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
	}
>>>>>>> f7f0223d222880f76504b65fe9792015d034ca7d
};