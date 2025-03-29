#include <iostream>
class Pet {
public:
    virtual void feed(int hours, int minutes) = 0;
    virtual void sleep(int hours, int minutes) = 0;
    virtual void walk(int hours, int minutes) = 0;
    virtual ~Pet() {}
};
class Cat : public Pet {
public:
    void feed(int hours, int minutes) override {
        std::cout << "����� ���������� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }

    void sleep(int hours, int minutes) override {
        std::cout << "����� ���� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }

    void walk(int hours, int minutes) override {
        std::cout << "����� �������� � " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }
};
