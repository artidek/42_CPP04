/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 22:54:17 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/01 23:02:38 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
public:
	Brain(void);
	Brain(const Brain& copy);
	Brain& operator=(const Brain& copy);
	virtual ~Brain();
	std::string ideas[100];
};

#endif