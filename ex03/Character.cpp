/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 22:15:11 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/03 23:56:50 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter()
{
}

Character::Character(std::string const & name) : ICharacter(name)
{
}

Character::Character(Character const & copy) : ICharacter(copy)
{
}

Character & Character::operator=(Character const & copy)
{
	if (this != &copy)
		ICharacter::operator=(copy);
	return *this;
}

std::string const & Character::getName()
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i]->getType().empty())
		{
			delete this->_materias[i];
			this->_materias[i] = m->clone();
		}	
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (!this->_materias[idx]->getType().empty());
			this->_materias[idx]->clearType();
	}
}