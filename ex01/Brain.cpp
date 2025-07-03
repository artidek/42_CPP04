/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 22:54:06 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/03 11:42:59 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called\n";
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
	std::cout << "Brain copy constructor called\n";
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called\n";
}

Brain& Brain::operator=(const Brain& copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return *this;
}