/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:29:50 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/28 10:29:54 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
private:
	struct {
		std::string formClass;
		Form* (Intern::*formExecute)( const std::string& target ) const;
	} mode[3];

	Form* makeShrubbery( const std::string& target ) const;
	Form* makeRobotomy( const std::string& target ) const;
	Form* makePresidential( const std::string& target ) const;

public:
	Intern( void );
	Intern( const Intern& rhs );
	virtual ~Intern( void );

	Intern& operator=( const Intern & rhs );

	Form*	makeForm( const std::string& formClass, const std::string& target ) const;
};

#endif

/*#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern{
private:

public:
	Intern();
	~Intern();
	Intern(Intern &intern);
	const Intern &operator=(Intern &intern);
	Form &makeForm(std::string formName, std::string target);
	ShrubberyCreationForm &makeShrub(std::string target);
	RobotomyRequestForm &makeRobot(std::string target);
	PresidentialPardonForm &makePardon(std::string target);
};
*/

