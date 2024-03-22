#include <iostream>
#include <memory>

// Base class
class Animal {
public:
    virtual void speak() const = 0; // pure virtual function
    virtual ~Animal() = default;    // a destructor is required
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
    std::unique_ptr<Animal> dog = std::make_unique<Dog>();
    std::unique_ptr<Animal> cat = std::make_unique<Cat>();

    whatDoesTheAnimalSay(*dog); // outputs: bark
    whatDoesTheAnimalSay(*cat); // outputs: meow
    
    std::cout << "Sizeof(Dog) is " << sizeof(Dog) << std::endl;
    std::cout << "Sizeof(void*) is " << sizeof(void*) << std::endl;

    return 0;
}

