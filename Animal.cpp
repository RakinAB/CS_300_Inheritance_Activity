#include "Animal.h"
#include <iostream>

//CLASS ANIMAL
Animal::Animal(){
    this -> name = NULL;
    this -> age = 0;
    this -> type = NULL;
}

void Animal::displayInfo(){
    std::cout << "Name: " << this->getName() << " Age: " << this->getAge() << std::endl;
    std::cout << "Type: " << this->getType() << std::endl;
}

//Getters and Setters : ANIMAL
std::string Animal::getName(){
    return name;
}

void Animal::setName(std::string n){
    this -> name = n;
}

int Animal::getAge(){
    return age;
}

void Animal::setAge(int years){
    this -> age = years;
}

std::string Animal::getType(){
    return type;
}

void Animal::setType(std::string t){
    this -> type = t;
}

//SUBCLASS DOG AND CAT
Dog::Dog(std::string n, int a, std::string t, std::string breed){
    this -> name = n;
    this -> age = a;
    this -> type = t;
    this -> breed = breed;
}

Cat::Cat(std::string n, int a, std::string t, std::string breed){
    this -> name = n;
    this -> age = a;
    this -> type = t;
    this -> breed = breed;
}

std::string Dog::displayInfo(){
    std::cout << "Name: " << getName() << " Age: " << this->getAge() << std::endl;
    std::cout << "Type: " << getType() <<  " Breed: " << this->getBreed() << std::endl;
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
    this->breed = br;
}

void Cat::setBreed(std::string br){
    this -> breed = br;
}