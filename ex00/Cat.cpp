#include "Cat.hpp"

// Constructor
Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructed." << std::endl;
}

// Copy constructor
Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructed." << std::endl;
}

// Copy assignment operator
Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
        Animal::operator=(other);
    std::cout << "Cat assigned." << std::endl;
    return *this;
}

// Destructor
Cat::~Cat() {
    std::cout << "Cat destructed." << std::endl;
}

// Member function
void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}
