/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 00:07:05 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/21 00:07:09 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructor
Dog::Dog() : brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog constructed." << std::endl;
}

// Copy constructor
Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain))
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
	delete brain;
	std::cout << "Dog destructed." << std::endl;
}

// Member function
void Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}
