/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 20:40:36 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/05 21:03:00 by aobshatk         ###   ########.fr       */
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
	Cure* newCure = new Cure();
	return newCure;
}