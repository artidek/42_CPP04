/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 21:37:18 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/04 00:01:47 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() : _materias(new AMateria*[4])
{
}

ICharacter::ICharacter(std::string const & name) : _name(name), _materias(new AMateria*[4])
{
}

ICharacter::ICharacter(ICharacter const & copy) : _name(copy.getName())
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = copy._materias[i];
}

ICharacter & ICharacter::operator=(ICharacter const & copy)
{
	if (this != & copy)
	{
		this->_name = copy.getName();
		for (int i = 0; i < 4; i++)
		{
			delete this->_materias[i];
			this->_materias[i] = copy._materias[i]->clone();
		}
	}
	return *this;
}

ICharacter::~ICharacter(void)
{
	for (int i = 0; i < 4; i++)
	{
		delete _materias[i];
	}
}

void ICharacter::use(int idx, ICharacter & target)
{
	if (idx >= 0 && idx < 4 && !this->_materias[idx]->getType().empty())
		this->_materias[idx]->use(target);
}