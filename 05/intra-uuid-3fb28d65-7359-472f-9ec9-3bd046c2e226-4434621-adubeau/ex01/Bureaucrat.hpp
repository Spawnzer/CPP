/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:16:36 by adubeau           #+#    #+#             */
/*   Updated: 2022/07/11 15:16:38 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"


class Form;

class Bureaucrat {
private:
			const std::string 	name;
			int 				grade;
public:
			Bureaucrat();
			~Bureaucrat();
			Bureaucrat(Bureaucrat &bureaucrat);
			const Bureaucrat &operator=(Bureaucrat &bureaucrat);
			Bureaucrat(const std::string name);
			Bureaucrat(const std::string name, int grade);
			Bureaucrat(int grade);
			void setName(const std::string name);
			const std::string getName(void) const;
			void setGrade(int grade);
			int getGrade(void);
			void promote(void);
			void demote(void);
			void signForm(Form &form);

	class GradeTooHighException : public std::exception{
	public:		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
	public:		virtual const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &s, Bureaucrat  &bureaucrat);

#endif