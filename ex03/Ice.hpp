/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 00:12:37 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/21 00:12:44 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
	Ice();
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);
	virtual ~Ice();
	
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif // ICE_HPP
