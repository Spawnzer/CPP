/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:37:25 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/19 20:34:32 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include "Weapon.hpp"

class Weapon{
private:
	std::string type;
public:
	Weapon(std::string type);
	~Weapon( void );
	std::string getType(void) const;
	void 		setType(std::string type);

};

#endif
