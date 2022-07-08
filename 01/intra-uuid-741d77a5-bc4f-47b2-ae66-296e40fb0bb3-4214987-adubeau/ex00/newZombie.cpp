/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:12:52 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/19 13:12:54 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *newZ = new Zombie;
	newZ->set_name(name);
	return (newZ);
}



