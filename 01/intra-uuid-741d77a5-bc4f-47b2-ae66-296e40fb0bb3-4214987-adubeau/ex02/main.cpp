/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 15:37:35 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/19 15:37:37 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address of the string variable = " << &str << std::endl;
	std::cout << "The memory address held by stringPTR = " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF = " << &stringREF << std::endl;

	std::cout << "The value of the string variable = " << str << std::endl;
	std::cout << "The value pointed to by stringPTR = " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF = " << stringREF << std::endl;
}
