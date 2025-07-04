/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 20:58:47 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/04 21:23:34 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOUCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource(void);
	MateriaSource (MateriaSource const & copy);
	MateriaSource & operator=(MateriaSource const & copy);
	~MateriaSource(void);
	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);
};

#endif