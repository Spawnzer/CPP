/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:02:23 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/06 12:02:25 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>

class	Phonebook{

private:

	Contact	contact[8];

public:
	Phonebook(void);
	~Phonebook(void);

	void 	searchContact(int count);
	void	addContact(void);
	void 	printContacts(int i, int count);


};

void	emptyLine();


#endif
