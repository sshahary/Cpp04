/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 23:44:18 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/20 23:44:22 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
