/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:10:48 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/15 16:10:52 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Request Form", "Target", 145, 137)
{
	std::cout << "Default constructor." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Default destructor." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("Pardon", target, 145, 137)
{
	std::cout << "Constructor with target parameters" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &shrubberyCreationForm) : Form(shrubberyCreationForm.getName(), shrubberyCreationForm.getTarget(), shrubberyCreationForm.getSignReq(), shrubberyCreationForm.getExecReq())
{
	*this = shrubberyCreationForm;
}

ShrubberyCreationForm const &ShrubberyCreationForm::operator=(ShrubberyCreationForm &shrubberyCreationForm)
{
	(void)shrubberyCreationForm;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if(this->getSignStatus() == false)
		throw ShrubberyCreationForm::NotSignedException();
	else if (executor.getGrade() > this->getExecReq())
		throw ShrubberyCreationForm::GradeExecuteTooLow();
	else {
		std::cout << executor.getName() << " executed form " << this->getName() << std::endl;
		std::ofstream ofs(this->getTarget() + "_shrubbery");
		ofs << "          &&& &&  & &&\n" <<
			"      && &\\/&\\|& ()|/ @, &&\n" <<
			"      &\\/(/&/&||/& /_/)_&/_&\n" <<
			"   &() &\\/&|()|/&\\/ '%\" & ()\n" <<
			"  &_\\_&&_\\ |& |&&/&__%_/_& &&\n" <<
			"&&   && & &| &| /& & % ()& /&&\n" <<
			" ()&_---()&\\&\\|&&-&&--%---()~\n" <<
			"     &&     \\|||\n" <<
			"             |||\n" <<
			"             |||\n" <<
			"             |||\n" <<
			"       , -=-~  .-^- _" << "      " << executor.getName() << std::endl;
	}
}
