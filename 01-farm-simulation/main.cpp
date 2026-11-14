#include "Farm.h"

int main() {
    Dog dog("Rex", 4);
    Cat cat("Luna", 2);
    Pig pig("Porky", 3);
    Cow cow("Bella", 5);

    Farm farm;
    farm + &dog + &cat + &pig + &cow;

    std::cout << farm << "\n";
    std::cout << "Roll call:\n";
    farm.makeAllSpeak();

    return 0;
}