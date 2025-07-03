/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 22:11:18 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/03 23:57:34 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character(void);
	Character(std::string const & name);
	Character (ICharacter const & copy);
	Character & operator=(ICharacter const & copy);
	~Character(void);
	std::string const & getName();
	void equip(AMateria *m);
	void unequip(int idx);
};


#endif