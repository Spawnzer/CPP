/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:16:29 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/11 15:16:30 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("nameless"), grade(150)
{
	std::cout << "Default constructor." << std::endl;
}

Bureaucrat::~Bureaucrat(){std::cout << "Default destructor." << std::endl;}

Bureaucrat::Bureaucrat(int grade) : name("nameless")
{
	std::cout << "Default constructor with grade parameter." << std::endl;
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(const std::string name) : name(name), grade(150)
{
	std::cout << "Default constructor with name parameter." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	std::cout << "Default constructor with parameters." << std::endl;
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat &bureaucrat)
{
	std::cout << "Copy constructor." << std::endl;
	*this=bureaucrat;
}

Bureaucrat const &Bureaucrat::operator=(Bureaucrat &bureaucrat)
{
	std::cout << "Copy assigment operator." << std::endl;
	setName(name);
	grade = bureaucrat.getGrade();
	return (*this);
}

void Bureaucrat::setName(const std::string name)
{
	(std::string )name = (std::string )name;
}

const std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

void Bureaucrat::setGrade(int grade)
{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		this->grade = grade;
}

int Bureaucrat::getGrade(void)
{
	return (this->grade);
}

void Bureaucrat::promote(void)
{
	this->setGrade(this->getGrade() - 1);
}

void Bureaucrat::demote(void)
{
	this->setGrade(this->getGrade() + 1);
}

std::ostream &operator<<(std::ostream &s, Bureaucrat &bureaucrat)
{
	s << bureaucrat.getName();
	std::cout << ", bureaucrat grade ";
	s << bureaucrat.getGrade();
	std::cout << std::endl;
	return (s);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade can't be higher than 1 \n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade can't be lower than 150 \n";
}
