/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:30:54 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/06 17:30:57 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>


class ClapTrap {

private:
	std::string name;
	int 		hp;
	int 		energy;
	int 		attDmg;

public:
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(ClapTrap &clapTrap);
		ClapTrap &operator = (ClapTrap &clapTrap);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		const std::string	getName(void);
		int	getDmg(void);
		int	getEnergy();
		int	getHp();


};
