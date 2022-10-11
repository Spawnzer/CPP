/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:16:06 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/11 15:16:19 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	PresidentialPardonForm pardonForm("p4");
	ShrubberyCreationForm shrubberyForm("s4");
	RobotomyRequestForm robotomyForm("r4");
	try {
		Bureaucrat bureaucrat("Tok",1);
		std::cout << bureaucrat;
		std::cout << pardonForm;
		bureaucrat.signForm(pardonForm);
		pardonForm.execute(bureaucrat);
		bureaucrat.signForm(shrubberyForm);
		shrubberyForm.execute(bureaucrat);
		bureaucrat.signForm(robotomyForm);
		robotomyForm.execute(bureaucrat);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}



}
