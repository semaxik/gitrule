#include <iostream>

class Pet {
public:
    virtual void feed(int hours, int minutes) = 0;
    virtual void sleep(int hours, int minutes) = 0;
    virtual void walk(int hours, int minutes) = 0;
    virtual ~Pet() {}
};
class Dog : public Pet {
public:
    void feed(int hours, int minutes) override {
        std::cout << "Собака покормлена в " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }

    void sleep(int hours, int minutes) override {
        std::cout << "Собака спит с " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }

    void walk(int hours, int minutes) override {
        std::cout << "Собаку выгуляют в " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }
};