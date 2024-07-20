#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
    std::string type;
    public:
    // Constructor
    Animal();
    
    // Copy constructor
    Animal(const Animal& other);
    
    // Copy assignment operator
    Animal& operator=(const Animal& other);
    
    // Destructor
    virtual ~Animal();

    // Member function
    virtual void makeSound() const;
    std::string getType() const;

};

#endif