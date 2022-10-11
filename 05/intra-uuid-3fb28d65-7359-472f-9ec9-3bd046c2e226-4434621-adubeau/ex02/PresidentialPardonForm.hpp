/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:36:05 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/15 16:36:06 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDON_HPP
#define PRESIDENTIALPARDON_HPP
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form{
private:
	PresidentialPardonForm();

public:
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(PresidentialPardonForm &presidentialPardonForm);
	const PresidentialPardonForm &operator=(PresidentialPardonForm &presidentialPardonForm);
	virtual void execute(Bureaucrat const &executor) const;

};

#endif


