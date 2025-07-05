/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 22:11:18 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/05 20:05:35 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria* _materias[4];
public:
    Character();
    Character(std::string const & name);
    Character(Character const & copy);
    Character & operator=(Character const & copy);
    virtual ~Character();
    virtual std::string const & getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif