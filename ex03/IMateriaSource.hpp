/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 20:46:00 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/04 20:52:14 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H

#include "AMateria.hpp"

class IMateriaSource
{
protected:
	AMateria** _materias;
public:
	IMateriaSource(void);
	IMateriaSource (IMateriaSource const & copy);
	IMateriaSource & operator=(IMateriaSource const & copy);
	virtual~IMateriaSource(void);
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif