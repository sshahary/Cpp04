#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal 
{
    public:
    // Constructor
    Cat();
    
    // Copy constructor
    Cat(const Cat& other);
    
    // Copy assignment operator
    Cat& operator=(const Cat& other);
    
    // Destructor
    ~Cat();

    // Member function
    void makeSound() const;
};

#endif // CAT_HPP
