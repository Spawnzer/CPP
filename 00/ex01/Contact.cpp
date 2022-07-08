/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:09:25 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/06 12:09:27 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

void		Contact::setFirst (std::string first)
{
	this->first = first;
}
void		Contact::setLast (std::string last)
{
	this->last = last;
}
void 		Contact::setNickname (std::string nickname)
{
	this->nickname = nickname;
}
void		Contact::setPhone (std::string phone)
{
	this->phone = phone;
}
void 		Contact::setSecret (std::string secret)
{
	this->secret = secret;
}

std::string	Contact::getFirst (void) const
{
	return this->first;
}
std::string	Contact::getLast (void) const
{
	return this->last;
}
std::string	Contact::getNickname (void) const
{
	return this->nickname;
}
std::string	Contact::getPhone (void) const
{
	return this->phone;
}
std::string	Contact::getSecret (void) const
{
	return this->secret;
}

