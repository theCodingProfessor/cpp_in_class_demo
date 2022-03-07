// Clinton Garwood
// CSCE 306: Spring 2022
// Class Inheritance Demo
// Animal will be the base class
// file: Animal.cpp

#include <iostream>
#include <string>
using namespace std;

#include "Animal.h"

Animal::Animal(){}

Animal::Animal(std::string a_species, int estimated_life, std::string preferred_food)
    : species{a_species}, life_span{estimated_life}, eats{preferred_food} {}

string Animal::get_species(){
    return species;
}

int Animal::get_lifespan(){
    return life_span;
}

string Animal::get_food(){
    return eats;
}

void Animal::set_lifespan(int life){
    this->life_span = life;
}

void Animal::set_species(std::string type){
    this->species = type;
}

void Animal::set_food(std::string food){
    this->eats = food;
}

