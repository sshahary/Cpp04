/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 00:06:28 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/21 00:06:32 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructed." << std::endl;
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < 100; ++i)
	{
		ideas[i] = other.ideas[i];
	}
	std::cout << "Brain copy constructed." << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
		{
			ideas[i] = other.ideas[i];
		}
	}
	std::cout << "Brain assigned." << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructed." << std::endl;
}
