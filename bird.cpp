#include <iostream>
#include "bird.h"

class Duck : public Bird {
  public:
    Duck() : Bird("Duck") {
      cry();
    }
    ~Duck() {
      cry();
    }

    void cry() override {
        std::cout << "Quack!" << std::endl;
    }
};

class Penguin : public Bird {
  public:
    Penguin() : Bird("Penguin") {
      cry();
    }
    ~Penguin() {
      cry();
    }

    void cry() override {
        std::cout << "Squawk!" << std::endl;
    }

    void fly() override {
        std::cout << "This bird can't fly." << std::endl;
    }
};

class Eagle : public Bird {
  public:
    Eagle() : Bird("Eagle") {
      cry();
    }
    ~Eagle() {
      cry();
    }

    void cry() override {
        std::cout << "Screech!" << std::endl;
    }

    void swim() override {
        std::cout << "This bird can't swim." << std::endl;
    }
};
