/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:38:09 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/19 19:38:11 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL){}

HumanB::~HumanB(){}

void 		HumanB::attack(void)
{
	if (this->getWeapon() == NULL)
		std::cout << this->name << " is unarmed" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void 		HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

Weapon*		HumanB::getWeapon(void)
{
	return (this->weapon);
}





