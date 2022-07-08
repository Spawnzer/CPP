/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:30:37 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/06 17:30:39 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap1("ClapTrap1");
	ClapTrap claptrap2(claptrap1);

	while (1)
	{
		claptrap1.attack(claptrap2.getName());
		if (claptrap1.getEnergy() >= 0)
			claptrap2.takeDamage(claptrap1.getDmg());
		if (claptrap2.getHp() <= 0 || claptrap1.getEnergy() <= 0 || claptrap2.getEnergy() <= 0)
			break;
		claptrap2.beRepaired(1);
	}
}

