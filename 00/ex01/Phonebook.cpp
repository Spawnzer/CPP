/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:02:11 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/06 12:02:12 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Phonebook.hpp"

Phonebook::Phonebook(void){}
Phonebook::~Phonebook(void){}

void 	Phonebook::printContacts(int i, int count)
{
	std::string first;
	std::string last;
	std::string nickname;

	if (i > count)
		std::cout << "|ERROR, THIS CONTACT DOESNT EXIST|\n";
	else if (i >= 0) {
		std::cout << "|--Full name : " << contact[i - 1].getFirst() << " " << contact[i - 1].getLast() << "\n";
		std::cout << "|--Nickname : " << contact[i - 1].getNickname() << "\n";
		std::cout << "|--Phone number : " << contact[i - 1].getPhone() << "\n";
		std::cout << "|--Secret : " << contact[i - 1].getSecret() << "\n";
	}
	else {
		std::cout << "|#|First name|Last name |Nickname  |\n";
		for (int j = 0; j < count; j++)
		{
			first = (contact[j].getFirst().length() > 10 ? contact[j].getFirst().substr(0,9) + "." : contact[j].getFirst());
			last =  (contact[j].getLast().length() > 10 ? contact[j].getLast().substr(0,9) + "." : contact[j].getLast());
			nickname = (contact[j].getNickname().length() > 10 ? contact[j].getNickname().substr(0,9) + "." : contact[j].getNickname());
			std::cout << "|" << j + 1 << "|";
			std::cout << std::setw(10) << first  << "|" ;
			std::cout << std::setw(10) << last  << "|" ;
			std::cout << std::setw(10) << nickname << "|" << std::endl;
		}
	}
}

void 	Phonebook::searchContact(int count)
{
	std::string str;
	int i = 0;

	std::cout << "|------HERE ARE YOUR CONTACTS------|\n";
	emptyLine();
	printContacts(-1, count);
	std::cout << "|-------ENTER THEIR # TO SEE-------|\n";
	std::cout << "|-------ALL THEIR INFORMATION------|\n|";
	emptyLine();
	std::cout << "|";
	std::getline(std::cin, str);
	while (!(std::isdigit(str[0])) || str.length() > 1 || std::stoi(str) < 0 || std::stoi(str) > count) {
		std::cout << "|-----THAT'S NOT A VALID NUMBER----|\n";
		std::cout << "|-------PLEASE ENTER A NUMBER------|\n";
		std::cout << "|----------BETWEEN 1 AND " << count << "---------|\n|";
		std::getline(std::cin, str);
	}
	i = std::stoi(str);
	printContacts(i, count);
}

void	Phonebook::addContact()
{
	std::string input;
	static int j;

	std::cout << j << std::endl;
	std::cout << "|----PLEASE ENTER THE FOLLOWING----|\n";
	emptyLine();
	std::cout << "|---INFORMATION FOR EACH CONTACT---|\n";
	std::cout << "|-----------FIRST NAME-------------|\n|";
	std::getline(std::cin, input);
	while (input.length() < 1)
	{
		std::cout << "|---ERROR, CONTACT MUST AT LEAST---|\n";
		std::cout << "|---------HAVE A FIRST NAME--------|\n|";
		std::getline(std::cin, input);
	}
	this->contact[j].setFirst(input);
	std::cout << "|------------LAST NAME-------------|\n|";
	std::getline(std::cin, input);
	this->contact[j].setLast(input);	std::cout << "|------------NICKNAME--------------|\n|";
	std::getline(std::cin, input);
	this->contact[j].setNickname(input);	std::cout << "|-----------PHONE NUMBER-----------|\n|";
	std::getline(std::cin, input);
	this->contact[j].setPhone(input);	std::cout << "|----------DARKEST SECRET----------|\n|";
	std::getline(std::cin, input);
	this->contact[j].setSecret(input);	emptyLine();
	std::cout << "|==================================|\n";
	emptyLine();
	j = (j + 1) % 8;
}


