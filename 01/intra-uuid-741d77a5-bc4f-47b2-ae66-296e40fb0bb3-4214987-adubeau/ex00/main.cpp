/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:12:16 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/19 13:12:30 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Zombie.hpp"

int	main()
{
	Zombie *newZ = newZombie("Jack");
	newZ->announce();
	randomChump("John");


	delete newZ;
	return (1);
}
