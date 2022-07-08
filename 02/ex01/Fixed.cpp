/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:15:43 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/24 13:15:45 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

Fixed::Fixed(void) : nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &F)
{
	std::cout << "Copy constructor called" << std::endl;
	nb = F.getRawBits();
}

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->nb = nb << BITS;
}

Fixed::Fixed(float const nb)
{
		std::cout << "Float constructor called" << std::endl;
		this->nb = (roundf(nb * (float)(1 << BITS)));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream & s, Fixed const &F)
{
	s << F.toFloat();
	return (s);
}
int Fixed::getRawBits( void ) const
{
	return (this->nb);
}
void Fixed::setRawBits( int const raw )
{
	this->nb = raw;
}

Fixed &Fixed::operator=(const Fixed &F)
{
	std::cout << "Copy assignment operator called" << std::endl;
	nb = F.getRawBits();
	return (*this);
}

float 	Fixed::toFloat( void ) const
{
	return ((float)nb / (1 << BITS));
}
int		Fixed::toInt( void ) const
{
	return int(nb >> BITS);
}
