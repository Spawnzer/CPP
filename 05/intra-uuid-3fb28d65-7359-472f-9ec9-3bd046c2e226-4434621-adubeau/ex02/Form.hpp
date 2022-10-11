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
		Form();
		const std::string name;
		std::string target;
		bool isSigned;
		int signReq;
		int execReq;

public:
		virtual ~Form();
		Form(const std::string &name,const std::string &target,const int signReq, const int execReq);
		Form(const Form &form);
		Form &operator=(Form &form);
		virtual void execute(Bureaucrat const &executor) const = 0;
		void setName(const std::string name);
		const std::string getName(void) const;
		void setTarget(const std::string target);
		const std::string getTarget(void) const;
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
	class GradeSignatureTooLow : public std::exception{
		public: virtual const char* what() const throw();
	};
	class GradeExecuteTooLow : public std::exception{
	public: virtual const char* what() const throw();
	};
	class GradeInvalidException : public std::exception{
	public: virtual const char* what() const throw();
	};
	class AlreadySignedException : public std::exception{
	public: virtual const char* what() const throw();
	};
	class NotSignedException : public std::exception{
	public: virtual const char* what() const throw();
	};

};
std::ostream &operator<<(std::ostream &s, Form &form);



#endif
