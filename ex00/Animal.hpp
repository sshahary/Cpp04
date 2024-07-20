/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 23:43:53 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/20 23:44:01 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
	std::string type;
	public:
	// Constructor
	Animal();
	
	// Copy constructor
	Animal(const Animal& other);
	
	// Copy assignment operator
	Animal& operator=(const Animal& other);
	
	// Destructor
	virtual ~Animal();

	// Member function
	virtual void makeSound() const;
	std::string getType() const;

};

#endif