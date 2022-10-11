/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:36:05 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/15 16:36:06 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form{
private:


public:
	ShrubberyCreationForm();
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(ShrubberyCreationForm &shrubberyCreationForm);
	const ShrubberyCreationForm &operator=(ShrubberyCreationForm &shrubberyCreationForm);
	virtual void execute(Bureaucrat const &executor) const;
};

#endif


