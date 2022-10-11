/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonPresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:10:48 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/15 16:10:52 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", "Target", 25, 5)
{
	std::cout << "Default constructor." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Default destructor." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("Pardon", target, 25, 5)
{
	std::cout << "Constructor with target parameters" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &presidentialPardonForm) : Form(presidentialPardonForm.getName(), presidentialPardonForm.getTarget(), presidentialPardonForm.getSignReq(), presidentialPardonForm.getExecReq())
{
	*this = presidentialPardonForm;
}

PresidentialPardonForm const &PresidentialPardonForm::operator=(PresidentialPardonForm &presidentialPardonForm)
{
	(void)presidentialPardonForm;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if(this->getSignStatus() == false)
		throw PresidentialPardonForm::NotSignedException();
	else if (executor.getGrade() > this->getExecReq())
		throw PresidentialPardonForm::GradeExecuteTooLow();
	else {
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
}