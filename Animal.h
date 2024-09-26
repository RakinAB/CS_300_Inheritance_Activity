#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <string>

class Animal{
    protected:
        Animal();
        std::string name;
        int age;
        std::string type;

    public:
        void displayInfo();
        
        std::string getType();
        void setType(std::string t);

        std::string getName();
        void setName(std::string n);

        int getAge();
        void setAge(int years);
};

class Dog : public Animal(){
    public:

        Dog(std::string breed);
        //Override Animal's displayInfo, will include the breed
        void displayInfo();

        std::string getBreed();
        void setBreed();
};

class Cat : public Animal(){
    public:
        Cat(std::string breed);

        //Override Animal's displayInfo, will include the breed
        void displayInfo()
        std::string getBreed();
        void setBreed();
};
#endif