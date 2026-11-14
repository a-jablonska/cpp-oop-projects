#include "Farm.h"

Animal::Animal(const std::string& name, int age) : name(name), age(age) {}

std::string Animal::getName() const {
    return name;
}

int Animal::getAge() const {
    return age;
}

void Animal::speak() const {
    std::cout << "...\n";
}

Dog::Dog(const std::string& name, int age) : Animal(name, age) {}

void Dog::speak() const {
    std::cout << "Woof! Woof!\n";
}

Cat::Cat(const std::string& name, int age) : Animal(name, age) {}

void Cat::speak() const {
    std::cout << "Meow!\n";
}

Pig::Pig(const std::string& name, int age) : Animal(name, age) {}

void Pig::speak() const {
    std::cout << "Oink!\n";
}

Cow::Cow(const std::string& name, int age) : Animal(name, age) {}

void Cow::speak() const {
    std::cout << "Moo!\n";
}

Farm& Farm::operator+(Animal* animal) {
    if (animal != nullptr) {
        animals.push_back(animal);
    }
    return *this;
}

void Farm::makeAllSpeak() const {
    for (const Animal* animal : animals) {
        std::cout << animal->getName() << ": ";
        animal->speak();
    }
}

std::ostream& operator<<(std::ostream& out, const Farm& farm) {
    out << "Farm residents (" << farm.animals.size() << "):\n";
    for (const Animal* animal : farm.animals) {
        out << " - " << animal->getName() << " (age: " << animal->getAge() << ")\n";
    }
    return out;
}
