#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
    // Constructor
    Dog();
    
    // Copy constructor
    Dog(const Dog& other);
    
    // Copy assignment operator
    Dog& operator=(const Dog& other);
    
    // Destructor
    ~Dog();

    // Member function
    void makeSound() const;
};

#endif // DOG_HPP
