#include "Animal.h"
#include <iostream>

//CLASS ANIMAL
Animal::

std::string Animal::displayInfo(){
    std::cout << "Name: " << this->getName() << " Age: " << this->getAge() << std::endl;
    std::cout << "Type: " << this->getType() << std::end;
}

//Getters and Setters : ANIMAL
std::string getName(){
    return name;
}

void Animal::setName(string n){
    this -> name = n;
}

int Animal::getAge(){
    return age;
}

void Animal::setAge(int years){
    this -> age = years;
}

std::string getType(){
    return type;
}

void Animal::setType(string t){
    this -> type = t;
}

//SUBCLASS DOG AND CAT
std::string Dog::displayInfo(){
    std::cout << "Name: " << this->getName() << " Age: " << this->getAge() << std::endl;
    std::cout << "Type: " << this->getType() <<  " Breed: " << this->getBreed() << std::endl;
}

std::string Cat::displayInfo(){
    std::cout << "Name: " << this->getName() << " Age: " << this->getAge() << std::endl;
    std::cout << "Type: " << this->getType() <<  " Breed: " << this->getBreed() << std::endl;
}

//Getters and Setters: Cat and Dog

std::string Dog::getBreed(){
    return breed;
}
std::string Cat::getBreed(){
    return breed;
}

void Dog::setBreed(std::string br){
    this -> breed = br;
}

void Cat::setBreed(std::string br){
    this -> breed = br;
}