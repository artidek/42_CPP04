/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 23:15:21 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/02 11:02:37 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Dog puddle("puddle");
	Dog pitbull("pitbull");
	Cat siberian("siberian");
	Cat persian("persian");
	std::cout << puddle << " says ";
	puddle.makeSound();
	std::cout << pitbull << " says ";
	pitbull.makeSound();
	std::cout << siberian << " says ";
	siberian.makeSound();
	std::cout << persian << " says ";
	persian.makeSound();
	return 0;
}
