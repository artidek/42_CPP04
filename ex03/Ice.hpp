/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 20:17:30 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/04 20:32:45 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(std::string const & type);
	Ice(Ice const & copy);
	Ice& operator=(Ice const & copy);
	virtual ~Ice(void);
	Ice* clone(void) const;
};

#endif