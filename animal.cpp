#include <iostream>

// Base class
class Animal {
public:
    virtual void speak() const = 0; // pure virtual function
};

// Subclass: Dog
class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "bark" << std::endl;
    }
};

// Subclass: Cat
class Cat : public Animal {
public:
    void speak() const override {
        std::cout << "meow" << std::endl;
    }
};

void whatDoesTheAnimalSay(const Animal& a) {
    a.speak();
}

// main function
int main() {
    Dog dog;
    Cat cat;

    whatDoesTheAnimalSay(dog); // outputs: bark
    whatDoesTheAnimalSay(cat); // outputs: meow

    std::cout << "Sizeof(Dog) is " << sizeof(Dog) << std::endl;
    std::cout << "Sizeof(void*) is " << sizeof(void*) << std::endl;

    return 0;
}

