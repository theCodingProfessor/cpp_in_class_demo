// Clinton Garwood
// CSCE 306: Spring 2022
// Class Inheritance Demo
// Dog will be derived from Animal
// file: Dog.cpp

#include <iostream>
#include <string>
using namespace std;

#include "Animal.h"
#include "Dog.h"


//Dog::Dog(std::string unnamed, int unnamed1, std::string unnamed2, std::string type, int pounds,
//         int inches, std::string speaks, std::string knows, Animal asAnimal)
//    :   isAnimal(isAnimal.set_species(asAnimal.get_species()),
//        isAnimal.set_lifespan(asAnimal.get_lifespan()),
//        isAnimal.set_food(asAnimal.get_food()));
//    {
//      breed{type} weight{pounds}, height{inches}, language(speaks), tricks(knows)
//    }

Dog::Dog(std::string type, int pounds, int inches, std::string speaks, std::string knows,
         std::string a_species, int estimated_life, std::string preferred_food)
    : isAnimal(a_species, estimated_life, preferred_food), breed{type}, weight{pounds},
    height{inches}, language(speaks), tricks(knows)
    {}


std::string Dog::get_breed() {
    return this->breed;
    }    // i.e., collie, husky, dane, golden

int Dog::get_weight(){
    return this->weight;
    }; // in pounds

int Dog::get_height(){
    return this->height;
    }; // in inches

std::string Dog::get_language(){
    return this->language;
    }; // yap, bark, meow?

std::string Dog::get_tricks() {
    return this->tricks;
    } // behaviors it can learn

std::string Dog::get_animal_species(){
    return this->isAnimal.get_species();
}

std::string Dog::get_animal_food(){
    return this->isAnimal.get_food();
}

int Dog::get_animal_life(){
    return this->isAnimal.get_lifespan();
}
