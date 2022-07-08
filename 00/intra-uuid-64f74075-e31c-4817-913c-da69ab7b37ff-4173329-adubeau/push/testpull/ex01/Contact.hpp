/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:09:37 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/19 13:41:58 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include <string>
#include "Phonebook.hpp"

class	Contact{

private:
	std::string	first;
	std::string	last;
	std::string	nickname;
	std::string	phone;
	std::string	secret;

public:
	Contact(void);
	~Contact(void);

	void		setFirst (std::string first);
	void		setLast (std::string last);
	void 		setNickname (std::string nickname);
	void		setPhone (std::string phone);
	void 		setSecret (std::string secret);

	std::string	getFirst (void) const;
	std::string	getLast (void) const;
	std::string	getNickname (void) const;
	std::string	getPhone (void) const;
	std::string	getSecret (void) const;
};

#endif
