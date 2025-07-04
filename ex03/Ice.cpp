/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 20:22:16 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/04 20:37:38 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria(){}

Ice::Ice(std::string const & type) : AMateria(type){}

Ice::Ice(Ice const & copy) : AMateria(copy){}

Ice& Ice::operator=(Ice const & copy)
{
	if (this != &copy)
		AMateria::operator=(copy);
	return *this;
}

Ice* Ice::clone(void) const
{
	Ice* newIce = new Ice(this->_type);
	return newIce;
}