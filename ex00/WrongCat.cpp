/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 23:45:24 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/20 23:45:31 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructor
WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructed." << std::endl;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructed." << std::endl;
}

// Copy assignment operator
WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other) {
		WrongAnimal::operator=(other);
	}
	std::cout << "WrongCat assigned." << std::endl;
	return *this;
}

// Destructor
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructed." << std::endl;
}

// Member function
void WrongCat::makeSound() const
{
	std::cout << "Some generic wrong animal sound." << std::endl;
}
