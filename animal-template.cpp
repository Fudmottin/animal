#include <iostream>

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

class Elephant : public Animal {
public:
    void speak() const override {
        std::cout << "I'm gonna crush you!" << std::endl;
    }
};

template<typename T>
void whatDoesTheAnimalSay(const T& a) {
    static_assert(std::is_base_of<Animal, T>::value, "T must inherit from Animal");
    a.speak();
}

// main function
int main() {
    Dog dog;
    Cat cat;
    Elephant elephant;

    whatDoesTheAnimalSay(dog); // outputs: bark
    whatDoesTheAnimalSay(cat); // outputs: meow
    whatDoesTheAnimalSay(elephant);

    std::cout << "Sizeof(Dog) is " << sizeof(Dog) << std::endl;
    std::cout << "Sizeof(void*) is " << sizeof(void*) << std::endl;
    std::cout << "Sizeof(Elephant) is " << sizeof(Elephant) << std::endl;

    return 0;
}

