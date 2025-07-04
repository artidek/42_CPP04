/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 20:40:36 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/04 20:41:24 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria(){}

Cure::Cure(std::string const & type) : AMateria(type){}

Cure::Cure(Cure const & copy) : AMateria(copy){}

Cure& Cure::operator=(Cure const & copy)
{
	if (this != &copy)
		AMateria::operator=(copy);
	return *this;
}

Cure* Cure::clone(void) const
{
	Cure* newCure = new Cure(this->_type);
	return newCure;
}