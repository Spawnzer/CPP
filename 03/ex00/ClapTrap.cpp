/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:30:48 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/06 17:30:49 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name), hp(10), energy(10), attDmg(2)
{
	std::cout << "ClapTrap " << this->name << " has been activated" << std::endl;
	this->hp = 10;
	this->energy = 10;
	this->attDmg = 2;
}

ClapTrap::~ClapTrap(){
	if (this->hp <= 0)
		std::cout << "ClapTrap " << this->name << " has died" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " gracefully shuts down" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &clapTrap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = clapTrap;
}


ClapTrap &ClapTrap::operator=(ClapTrap &clapTrap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	name = clapTrap.getName() + ".1";
	hp = clapTrap.getHp();
	energy = clapTrap.getEnergy();
	attDmg = clapTrap.getDmg();
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy > 0) {
		std::cout << "ClapTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->attDmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " tries to attack, but it has no energy" << std::endl;
	this->energy -= 1;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	this->hp -=amount;
	std::cout << "ClapTrap " << this->name << " takes " << amount;
	std::cout << " damage, it now has " << this->hp << " hitpoints" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{

	if (this->energy > 0) {
		std::cout << "ClapTrap " << this->name << " repairs itself for " << amount;
		std::cout << " damage, it now has " << this->hp << " hitpoints" << std::endl;
		this->hp += amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " tries to repair itself, but it has no energy" << std::endl;
	this->energy -= 1;
}
const std::string	ClapTrap::getName()
{
	return (this->name);
}

int	ClapTrap::getDmg()
{
	return (this->attDmg);
}

int	ClapTrap::getEnergy()
{
	return (this->energy);
}

int	ClapTrap::getHp()
{
	return (this->hp);
}
