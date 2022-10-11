/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:36:05 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/15 16:36:06 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form{
private:
	RobotomyRequestForm();

public:
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(RobotomyRequestForm &robotomyRequestForm);
	const RobotomyRequestForm &operator=(RobotomyRequestForm &robotomyRequestForm);
	virtual void execute(Bureaucrat const &executor) const;
};

#endif


