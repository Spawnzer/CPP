/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:16:06 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/11 15:16:19 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat bureaucrat;
		std::cout << bureaucrat;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
	try {
		Bureaucrat bureaucrat1(1);
		std::cout << bureaucrat1;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
	try {
		Bureaucrat bureaucrat3(150);
		std::cout << bureaucrat3;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
	try {
		Bureaucrat bureaucrat4(1555);
		std::cout << bureaucrat4;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
	try {
		Bureaucrat bureaucrat5(-1);
		std::cout << bureaucrat5;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}

}
