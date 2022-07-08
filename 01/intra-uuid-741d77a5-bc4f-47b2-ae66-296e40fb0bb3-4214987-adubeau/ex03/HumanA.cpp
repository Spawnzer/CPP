/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:37:57 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/19 19:38:00 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon){}

HumanA::~HumanA(){}

void 		HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}


Weapon&		HumanA::getWeapon(void) const
{
	return (this->weapon);
}

void 		HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}




