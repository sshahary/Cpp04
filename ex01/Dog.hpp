/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 23:47:31 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/20 23:47:36 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
	Brain* brain;

	public:
	// Constructor
	Dog();
	
	// Copy constructor
	Dog(const Dog& other);
	
	// Copy assignment operator
	Dog& operator=(const Dog& other);
	
	// Destructor
	~Dog();

	// Member function
	void makeSound() const;
};

#endif // DOG_HPP
