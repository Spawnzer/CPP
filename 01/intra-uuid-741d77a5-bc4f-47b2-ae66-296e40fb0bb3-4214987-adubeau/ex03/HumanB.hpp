/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:38:18 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/19 20:34:59 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

class HumanB{
private:
	std::string name;
	Weapon* weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void 		attack(void);
	void 		setWeapon(Weapon &weapon);
	Weapon*		getWeapon(void) ;


};

#endif
