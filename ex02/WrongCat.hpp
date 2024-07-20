/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 00:07:54 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/21 00:08:01 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	// Constructor
	WrongCat();
	
	// Copy constructor
	WrongCat(const WrongCat& other);
	
	// Copy assignment operator
	WrongCat& operator=(const WrongCat& other);
	
	// Destructor
	~WrongCat();

	// Member function
	void makeSound() const;
};

#endif // WRONGCAT_HPP
