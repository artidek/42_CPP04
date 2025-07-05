/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 21:02:18 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/05 20:59:33 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
		{
			delete this->_materias[i];
			this->_materias[i] = copy._materias[i]->clone();
		}
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const & copy)
{
	if (this != & copy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_materias[i])
			{
				delete this->_materias[i];
				this->_materias[i] = copy._materias[i]->clone();
			}
			
		}
	}
	return *this;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete _materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* materia)
{
	
	for (int i = 0; i < 4; i++)
	{
		if (!materia->getType().empty() && !_materias[i])
		{
			_materias[i] = materia->clone();
			delete materia;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i]->getType().compare(type) == 0)
			return _materias[i]->clone();
	}
	return NULL;
}