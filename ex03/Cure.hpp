/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 20:38:41 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/04 20:40:11 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(std::string const & type);
	Cure(Cure const & copy);
	Cure& operator=(Cure const & copy);
	virtual ~Cure(void);
	Cure* clone(void) const;
};

#endif