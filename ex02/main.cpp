/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 00:07:18 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/21 00:07:22 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j; // should not create a leak
	delete i;

	const int arraySize = 10;
	Animal* animals[arraySize];

	for (int i = 0; i < arraySize / 2; ++i)
	{
		animals[i] = new Dog();
	}
	for (int i = arraySize / 2; i < arraySize; ++i) {
		animals[i] = new Cat();
	}

	for (int i = 0; i < arraySize; ++i) {
		animals[i]->makeSound();
	}

	for (int i = 0; i < arraySize; ++i) {
		delete animals[i];
	}

	// Test deep copy
	Dog basic;
	{
		Dog tmp = basic;
	}

	return 0;
}