/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 23:44:43 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/20 23:44:51 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// Creating Animal objects
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound
	j->makeSound(); // will output the dog sound
	meta->makeSound(); // will output the generic animal sound

	delete meta;
	delete j;
	delete i;

	// Creating WrongAnimal objects
	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* iWrong = new WrongCat();

	std::cout << iWrong->getType() << " " << std::endl;
	iWrong->makeSound(); // will output the WrongAnimal sound

	delete metaWrong;
	delete iWrong;

	return 0;
}
