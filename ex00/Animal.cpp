/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 23:43:43 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/20 23:43:49 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructor
Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructed." << std::endl;
}

// Copy constructor
Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal copy constructed." << std::endl;
}

// Copy assignment operator
Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		type = other.type;
	std::cout << "Animal assigned." << std::endl;
	return *this;
}

// Destructor
Animal::~Animal()
{
	std::cout << "Animal destructed." << std::endl;
}

// Member function
void Animal::makeSound() const
{
	std::cout << "Some generic animal sound." << std::endl;
}

// Get type function
std::string Animal::getType() const
{
	return type;
}