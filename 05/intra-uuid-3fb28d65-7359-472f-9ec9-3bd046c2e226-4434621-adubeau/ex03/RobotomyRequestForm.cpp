/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:10:48 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/15 16:10:52 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", "Target", 72, 45)
{
	std::cout << "Default constructor." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Default destructor." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("Robotomy Request Form", target, 72, 45)
{
	std::cout << "Constructor with target parameters" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &robotomyRequestForm) : Form(robotomyRequestForm.getName(), robotomyRequestForm.getTarget(), robotomyRequestForm.getSignReq(), robotomyRequestForm.getExecReq())
{
	*this = robotomyRequestForm;
}

RobotomyRequestForm const &RobotomyRequestForm::operator=(RobotomyRequestForm &robotomyRequestForm)
{
	(void)robotomyRequestForm;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	std::srand(std::time(nullptr));
	int random_variable = std::rand();
	if(this->getSignStatus() == false)
		throw RobotomyRequestForm::NotSignedException();
	else if (executor.getGrade() > this->getExecReq())
		throw RobotomyRequestForm::GradeExecuteTooLow();
	else {
		if (random_variable % 2 == 0)
			std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
		else
			std::cout << this->getTarget() << " has not been robotomized successfully" << std::endl;
	}
}
