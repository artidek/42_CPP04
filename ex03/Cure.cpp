/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 20:40:36 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/05 20:40:43 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure"){}

Cure::Cure(Cure const & copy) : AMateria(copy){}

Cure& Cure::operator=(Cure const & copy)
{
	if (this != &copy)
		AMateria::operator=(copy);
	return *this;
}

Cure::~Cure(void){}

Cure* Cure::clone(void) const
{
	std::cout << "I will clone with type" << this->_type << std::endl;
	Cure* newCure = new Cure();
	return newCure;
}