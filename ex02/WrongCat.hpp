#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    // Constructor
    WrongCat();
    
    // Copy constructor
    WrongCat(const WrongCat& other);
    
    // Copy assignment operator
    WrongCat& operator=(const WrongCat& other);
    
    // Destructor
    ~WrongCat();

    // Member function
    void makeSound() const;
};

#endif // WRONGCAT_HPP
