#include "Dog.hpp"

// Constructor
Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog constructed." << std::endl;
}

// Copy constructor
Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructed." << std::endl;
}

// Copy assignment operator
Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
        Animal::operator=(other);
    std::cout << "Dog assigned." << std::endl;
    return *this;
}

// Destructor
Dog::~Dog()
{
    std::cout << "Dog destructed." << std::endl;
}

// Member function
void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}
