/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 18:45:32 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/04 21:45:28 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
#define ICHARACTER_H

#include <iostream>
#include "AMateria.hpp"

class ICharacter
{
protected:
	std::string _name;
	AMateria** _materias;
public:
	ICharacter(void);
	ICharacter(std::string const & name);
	ICharacter (ICharacter const & copy);
	ICharacter & operator=(ICharacter const & copy);
	virtual~ICharacter(void);
	virtual std::string const & getName() const;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target);
};

#endif