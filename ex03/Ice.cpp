/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 20:22:16 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/05 21:03:29 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice"){}

Ice::Ice(Ice const & copy) : AMateria(copy){}

Ice& Ice::operator=(Ice const & copy)
{
	if (this != &copy)
		AMateria::operator=(copy);
	return *this;
}

Ice::~Ice(void){}

Ice* Ice::clone(void) const
{
	Ice* newIce = new Ice();
	return newIce;
}