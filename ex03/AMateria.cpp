/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:59:12 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/03 23:56:59 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(AMateria const & copy) : _type(copy.getType())
{
}

AMateria& AMateria::operator=(AMateria const & copy)
{
	return *this;
}

AMateria::~AMateria(void)
{
}

std::string const & AMateria::getType(void) const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	
}

void AMateria::clearType(void)
{
	this->_type.clear();
}