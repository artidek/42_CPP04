/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:59:21 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/05 19:02:59 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string _type;
public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const & copy);
	AMateria& operator=(AMateria const & copy);
	virtual ~AMateria();
	virtual std::string const & getType(void) const;
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target);
	virtual void clearType(void);
};

#endif