/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:59:12 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/05 19:44:13 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("materia")
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
	this->_type = copy.getType();
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
	if (!this->_type.empty() && this->getType().compare("ice") == 0)
		std::cout << "* shoots an ice bolt at "<< target.getName()<< std::endl;
	if (!this->_type.empty() && this->getType().compare("cure") == 0)
		std::cout << "* heals  "<< target.getName() <<"'s wounds *" << std::endl;
}

void AMateria::clearType(void)
{
	this->_type.clear();
}
