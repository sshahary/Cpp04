/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 23:45:04 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/20 23:45:10 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructor
WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal constructed." << std::endl;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
	std::cout << "WrongAnimal copy constructed." << std::endl;
}

// Copy assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other) {
		type = other.type;
	}
	std::cout << "WrongAnimal assigned." << std::endl;
	return *this;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructed." << std::endl;
}

// Member function
void WrongAnimal::makeSound() const
{
	std::cout << "Some generic wrong animal sound." << std::endl;
}

// Get type function
std::string WrongAnimal::getType() const
{
	return type;
}
