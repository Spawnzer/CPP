/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:38:43 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/19 20:34:39 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type){}

Weapon::~Weapon(void){}

void 		Weapon::setType(std::string type)
{
	this->type = type;
}

std::string Weapon::getType(void) const
{
	return (this->type);
}

