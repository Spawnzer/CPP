/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:07:12 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/11 18:07:14 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
		const std::string name;
		bool isSigned;
		int signReq;
		int execReq;

public:
		Form();
		~Form();
		Form(const std::string name, const int signReq, const int execReq);
		Form(Form &form);
		const Form &operator=(Form &form);
		void setName(const std::string name);
		const std::string getName(void) const;
		bool getSignStatus(void) const;
		int getSignReq(void) const;
		int getExecReq(void) const;
		void beSigned(Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception{
	public:		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
	public:		virtual const char *what() const throw();
	};

};
std::ostream &operator<<(std::ostream &s, Form &form);



#endif
