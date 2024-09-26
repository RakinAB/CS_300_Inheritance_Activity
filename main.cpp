#include "Animal.h"
#include "Shelter.h"
#include <iostream>

int main () {
    
    //Initialize instance of Shelter class
    std::vector<Animal*> animalVector = new;
    //Add sample object to vector of pointers that point to animal objects.


    int choice;
    do 
    {
        // Library Menu Text
        std::cout << "Welcome to Animal Shelter Management System:\n" << std::endl;
        // List out the options
        std::cout << "1. Add a Dog \n" << std::endl;
        std::cout << "2. Add a Cat \n" << std::endl;
        std::cout << "3. Remove an animal (by name) \n" << std::endl;
        std::cout << "4. Display all animals \n" << std::endl;
        std::cout << "5. Exit\n" << std::endl;

        // Prompt the user to enter their choice
        std::cout << "Enter your choice: " << std::endl;
        std::cin >> choice;
        std::cin.ignore();
        std::cout << std::endl;

        switch (choice) 
        {
            //Add a Dog
            case 1: {
                Animal* dog = new;

                //Get user input for name, age, type, and breed.
                std::string dogName;
                std::cout << "Enter the animal's name: " << std::endl;
                std::getline(std::cin, dogName);
                std::cout << "-------------------------------" << std::endl;
                dog->setName(dogName);

                int dogAge;
                std::cout << "Enter the dog's age: " << std::endl;
                std::getline(std::cin, dogAge);
                std::cout << "-------------------------------" << std::endl;
                dog->setAge(dogAge);

                dog->setType("Dog");

                std::string dogBreed;
                std::cout << "Enter the dog's breed: " << std::endl;
                std::getline(std::cin, dogBreed);
                std::cout << "-------------------------------" << std::endl;
                dog->setBreed(dogBreed);

                animalVector->addAnimal(dog);
                break;
            }
            //Add a Cat
            case 2: {
                Animal* cat = new;
                //Get user input for name, age, type, and breed.
                std::string catName;
                std::cout << "Enter the cat's name: " << std::endl;
                std::getline(std::cin, catName);
                std::cout << "-------------------------------" << std::endl;
                dog->setName(catName);

                int catAge;
                std::cout << "Enter the animal's age: " << std::endl;
                std::getline(std::cin, catAge);
                std::cout << "-------------------------------" << std::endl;
                dog->setAge(catAge);

                dog->setType("Cat");

                std::string catBreed;
                std::cout << "Enter the cat's breed: " << std::endl;
                std::getline(std::cin, catBreed);
                std::cout << "-------------------------------" << std::endl;
                dog->setBreed(catBreed);

                animalVector->addAnimal(cat);
                break;
            }
            case 3: {
                std::string animalNameRemove;
                std::cout << "Enter an animal's name to remove that animal: " << std::endl;
                std::getline(std::cin, animalNameRemove);
                std::cout << "-------------------------------" << std::endl;
                removeAnimal(animalNameRemove);
                std::cout << "%s has been successfully removed." << animalName << std::endl;
                break;
            }
            case 4: {
                std::cout << "Here are all the animals: \n" << std::endl;
                displayAnimals();
                break;
            }
            case 5: {
                std::cout << "Exiting the Animal Shelter Management System.\nGoodbye!" << std::endl;
                break;
            }
            default: {
                std::cout << "Invalid choice. Please try again with a valid choice." << std::endl;
                break;
            }
        }
        
    } while (choice != 5);
}