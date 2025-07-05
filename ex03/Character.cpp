/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 22:15:11 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/05 20:51:11 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

Character::Character(std::string const & name) :  _name(name)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

Character::Character(Character const & copy) : _name(copy.getName())
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
		{
			delete this->_materias[i];
			this->_materias[i] = copy._materias[i]->clone();
		}
	}
}

Character & Character::operator=(Character const & copy)
{
	if (this != & copy)
	{
		this->_name = copy.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->_materias[i])
			{
				delete this->_materias[i];
				this->_materias[i] = copy._materias[i]->clone();
			}
		}
	}
	return *this;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete _materias[i];
	}
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materias[i])
		{
			this->_materias[i] = m->clone();
			return;
		}	
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (!this->_materias[idx]->getType().empty())
			this->_materias[idx]->clearType();
	}
}

void Character::use(int idx, ICharacter & target)
{
	if (idx >= 0 && idx < 4 && !this->_materias[idx]->getType().empty())
		this->_materias[idx]->use(target);
}

std::string const & Character::getName() const
{
	return this->_name;
}