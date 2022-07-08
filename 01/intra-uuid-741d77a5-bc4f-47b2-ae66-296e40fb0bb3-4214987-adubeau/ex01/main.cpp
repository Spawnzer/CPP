/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:12:16 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/19 13:12:30 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Zombie.hpp"

int	main()
{
	int N = 5;
	Zombie *horde = zombieHorde(N, "Jack");
	for(int i = 0; i < N; i++) {
		horde[i].announce();
	}
	delete[] horde;
	return (1);
}
