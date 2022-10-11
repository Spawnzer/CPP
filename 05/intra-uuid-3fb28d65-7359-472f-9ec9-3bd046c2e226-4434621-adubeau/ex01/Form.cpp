/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:07:03 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/11 18:07:06 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("nameless"), isSigned(false), signReq(50), execReq(150)
{
	std::cout << "Default constructor." << std::endl;
}

Form::~Form()
{
	std::cout << "Default destructor." << std::endl;
}

Form::Form(const std::string name, const int signReq, const int execReq)
{
	std::cout << "Constructor with all but isSigned parameters" << std::endl;
	this->setName(name);
	this->signReq = signReq;
	this->execReq = execReq;
	this->isSigned = false;
}

Form::Form(Form &form)
{
	*this = form;
}

Form const &Form::operator=(Form &form)
{
	this->setName(form.getName());
	isSigned = form.getSignStatus();
	execReq = form.getExecReq();
	signReq = form.getSignReq();
	return (*this);
}

void Form::setName(const std::string name)
{
	(std::string )name = (std::string )name;
}

const std::string Form::getName(void) const
{
	return (this->name);
}

bool Form::getSignStatus(void) const
{
	return (this->isSigned);
}

int Form::getSignReq(void) const
{
	return (this->signReq);
}

int Form::getExecReq(void) const
{
	return (this->execReq);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->signReq)
		throw Form::GradeTooLowException();
	else
		this->isSigned = true;
}

std::ostream &operator<<(std::ostream &s, Form &form)
{
	std::cout << "Form named ";
	s << form.getName();
	std::cout << " requires grade ";
	s << form.getSignReq();
	std::cout << " to sign and ";
	s << form.getExecReq();
	std::cout << " to execute." << std::endl;
	if (form.getSignStatus())
		std::cout << "It is signed." << std::endl;
	else
		std::cout << "It is not signed." << std::endl;

	return (s);
}


const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade can't be higher than 1 \n";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return " couldn't sign form because its grade is too low" ;
}
