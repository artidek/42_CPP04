/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 21:02:18 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/04 21:24:53 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
}

MateriaSource::MateriaSource(MateriaSource const & copy) : IMateriaSource(copy) {}

MateriaSource & MateriaSource::operator=(MateriaSource const & copy)
{
	if (this != & copy)
		IMateriaSource::operator=(copy);
	return *this;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		delete _materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!materia->getType().empty() && _materias[i]->getType().empty())
		{
			delete _materias[i];
			_materias[i] = materia->clone();
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
	return nullptr;
}