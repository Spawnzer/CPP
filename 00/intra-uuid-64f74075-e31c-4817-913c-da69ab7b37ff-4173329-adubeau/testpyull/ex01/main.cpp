/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:04:00 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/14 17:04:02 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Phonebook.hpp"

void	emptyLine()
{
	std::cout << "|                                  |\n";
}

void	menu(int printMenu)
{
	std::cout << "|==================================|\n";
	emptyLine();
	std::cout << "|---THIS IS A PHONEBOOK, I GUESS---|\n";
	emptyLine();
	std::cout << "|==================================|\n";
	emptyLine();
	std::cout << "|---------PLEASE SELECT ONE--------|\n";
	std::cout << "|-----OF THE FOLLOWING OPTIONS-----|\n";
	emptyLine();
	std::cout << "|-------[ADD] A NEW CONTACT--------|\n";
	emptyLine();
	std::cout << "|-[SEARCH] FOR AN EXISTING CONTACT-|\n";
	emptyLine();
	std::cout << "|-------[EXIT] THIS PROGRAM--------|\n";
	emptyLine();
	std::cout << "|==================================|\n";
	printMenu *= -1;
}

int	main()
{
	std::string input;
	Phonebook	phonebook;
	int printMenu = -1;
	int count = 0;
	menu(printMenu);
	while (1)
	{
		std::cout << "|";
		std::getline(std::cin, input);
		if (input == "ADD" || input == "add") {
			count++;
			if (count >= 8)
				count = 8;
			phonebook.addContact();
			printMenu *= -1;
		}
		else if (input == "SEARCH" || input == "search") {
			if (count == 0) {
				std::cout << "|---ERROR - YOU HAVE NO FRIENDS----|\n";
				printMenu *= -1;
			}
			else {
				phonebook.searchContact(count);
				printMenu *= -1;
			}
		}
		else if (input == "EXIT" || input == "exit")
			break ;
		else if (input == "1" && printMenu < 0) {
			menu(printMenu);
			printMenu *= -1;
		}
		else{
			std::cout << "|--Invalid input, please try again-|\n";
			printMenu *= -1;
		}
		if (printMenu > 0) {
			std::cout << "|---PRESS 1 TO SEE THE MENU AGAIN--|\n";
			printMenu = -1;
		}
		std::cin.clear();
	}
	emptyLine();
	std::cout << "|-------------GOODBYE--------------|\n";
}
