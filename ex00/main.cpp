#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Create Animal objects
    Animal animal;
    Dog dog;
    Cat cat;

    // Call makeSound function for each animal
    animal.makeSound();
    dog.makeSound();
    cat.makeSound();

    // Test copy constructor and assignment operator
    Dog anotherDog(dog);
    anotherDog.makeSound();

    Cat anotherCat = cat;
    anotherCat.makeSound();

    return 0;
}
