#ifndef FARM_H
#define FARM_H

#include <iostream>
#include <string>
#include <vector>

class Animal {
protected:
    std::string name;
    int age;

public:
    Animal(const std::string& name, int age);
    virtual ~Animal() = default;

    std::string getName() const;
    int getAge() const;
    virtual void speak() const;
};

class Dog : public Animal {
public:
    Dog(const std::string& name, int age);
    void speak() const override;
};

class Cat : public Animal {
public:
    Cat(const std::string& name, int age);
    void speak() const override;
};

class Pig : public Animal {
public:
    Pig(const std::string& name, int age);
    void speak() const override;
};

class Cow : public Animal {
public:
    Cow(const std::string& name, int age);
    void speak() const override;
};

class Farm {
private:
    std::vector<Animal*> animals;

public:
    Farm& operator+(Animal* animal);
    void makeAllSpeak() const;

    friend std::ostream& operator<<(std::ostream& out, const Farm& farm);
};

#endif // FARM_H
