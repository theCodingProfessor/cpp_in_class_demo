// Clinton Garwood
// Created by ncc306 on 2/28/22.
// main driver for class project

#include <iostream>
using namespace std;
#include "Animal.h"
#include "Dog.h"

int main(){

    Animal Bears("Bears",50,"honey");
    cout << "\n\t" << Bears.get_species() << " eat " << Bears.get_food() << "." << endl;
    cout << "\t" << Bears.get_species() << " live for " << Bears.get_lifespan() << " years." << endl;

    Animal Dogs("Dogs",15,"cookies");
    cout << "\n\t" << Dogs.get_species() << " eat " << Dogs.get_food() << "."  << endl;
    cout << "\t" << Dogs.get_species() << " live for " << Dogs.get_lifespan() << " years." << endl;

//    Dog Collie(std::string(), 0, std::string(), "Collie", 40, 20, "Bark", "High Five", Dogs);
    Dog Golden("Golden Retriever", 50, 23, "Ruff", "fetch", "K9", 14, "Salmon");

    cout << "\n\tA " << Golden.get_breed() << " plays " << Golden.get_tricks() <<
    ", stands " << Golden.get_height() << " inches tall and weighs " << Golden.get_weight() << " pounds." << endl;

    // We cannot access the protected function call of the Inherited Class
    cout << "\tA " << Golden.get_animal_species() << " eats " << Golden.get_animal_food()
    << " and lives for " << Golden.get_animal_life() << " years." << endl;

    cout << "Golden Species: " << Golden.species << endl;

    // the only way to go after 'protected or private data members is to use a method
    // these do not work
    //cout << "Golden Species: " << Golden.eats << endl;
    //cout << "Golden Species: " << Golden.life_span << endl;
    cout << "Golden Food Preference: " << Golden.get_animal_food() << endl;
    cout << "Golden Species: " << Golden.get_animal_life() << endl;

//    // We cannot access the protected function call of the Inherited Class
////    cout << "\n\t" << Golden.get_species() << " eat " << Golden.get_food()
////    << "\t" << Golden.get_species() << " live for " << Golden.get_lifespan() << " years." << endl;
//
//
    return 0;
}

