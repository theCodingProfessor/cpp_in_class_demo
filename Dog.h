// Clinton Garwood
// CSCE 306: Spring 2022
// Class Inheritance Demo
// Dog will be derived from Animal
// file: Dog.h

#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"

#ifndef IN_CLASS_DEMO_DOG_H
#define IN_CLASS_DEMO_DOG_H


class Dog : public Animal {

public:
//    Dog(std::string unnamed, int unnamed1, std::string unnamed2, std::string type, int pounds, int inches,
//        std::string speaks, std::string knows, Animal isAnimal);
    Dog(std::string, int, int, std::string, std::string, std::string, int, std::string);

    std::string get_breed(); // in pounds
    int get_weight(); // in pounds
    std::string get_language(); // yap, bark, meow?
    int get_height(); // in inches
    std::string get_tricks();
    std::string get_animal_species();
    std::string get_animal_food();
    int get_animal_life();

private:
    std::string breed; // i.e., collie, husky, dane, golden
    int weight; // in pounds
    int height; // in inches
    std::string language; // yap, bark, meow?
    std::string tricks; // behaviors it can learn
    Animal isAnimal;
};

#endif //IN_CLASS_DEMO_DOG_H
