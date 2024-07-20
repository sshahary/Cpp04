/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 23:45:12 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/20 23:45:18 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
	std::string type;
	public:
	// Constructor
	WrongAnimal();
	
	// Copy constructor
	WrongAnimal(const WrongAnimal& other);
	
	// Copy assignment operator
	WrongAnimal& operator=(const WrongAnimal& other);
	
	// Destructor
	~WrongAnimal();

	// Member function
	void makeSound() const;
	std::string getType() const;
};

#endif
