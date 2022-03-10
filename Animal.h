// Clinton Garwood
// CSCE 306: Spring 2022
// Class Inheritance Demo
// Animal will be the base class
// file: Animal.h

#include <iostream>
#include <string>
using namespace std;

#ifndef CLASS_CODE_ANIMAL_H
#define CLASS_CODE_ANIMAL_H

class Animal {
public:
    Animal();
    Animal(std::string, int, std::string);
    string get_species();
    int get_lifespan();
    string get_food();

    void set_lifespan(int);
    void set_species(std::string);
    void set_food(std::string);

    std::string species; // common name
protected:
    int life_span; // in years (integer)
private:
    std::string eats; // preferred food

};


#endif //CLASS_CODE_ANIMAL_H
