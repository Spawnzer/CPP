/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:13:09 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/19 13:13:11 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie newZ;
	newZ.set_name(name);
	newZ.announce();
}
