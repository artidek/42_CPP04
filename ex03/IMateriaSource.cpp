/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 20:49:52 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/04 20:54:25 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource() : _materias(new AMateria*[4])
{
}

IMateriaSource::IMateriaSource(IMateriaSource const & copy)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_materias[i];
		this->_materias[i] = copy._materias[i]->clone();
	}
}

IMateriaSource & IMateriaSource::operator=(IMateriaSource const & copy)
{
	if (this != & copy)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->_materias[i];
			this->_materias[i] = copy._materias[i]->clone();
		}
	}
	return *this;
}

IMateriaSource::~IMateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		delete _materias[i];
	}
}