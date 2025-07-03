/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:59:21 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/03 23:55:20 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include <string>
#include "ICharacter.hpp"

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
	std::string const & getType(void) const;
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& taget);
	virtual void clearType(void);
};

#endif