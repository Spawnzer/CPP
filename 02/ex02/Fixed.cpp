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
	//std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &F)
{
	//std::cout << "Copy constructor called" << std::endl;
	nb = F.getRawBits();
}

Fixed::Fixed(int const nb)
{
	//std::cout << "Int constructor called" << std::endl;
	this->nb = nb << BITS;
}

Fixed::Fixed(float const nb)
{
		//std::cout << "Float constructor called" << std::endl;
		this->nb = (roundf(nb * (float)(1 << BITS)));
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	return (this->nb);
}
void Fixed::setRawBits( int const raw )
{
	this->nb = raw;
}

float 	Fixed::toFloat( void ) const
{
	return ((float)nb / (1 << BITS));
}
int		Fixed::toInt( void ) const
{
	return int(nb >> BITS);
}

float Fixed::getFloat( void ) const
{
	return ((float)this->nb);
}
int 	Fixed::getInt( void ) const
{
	return (this->nb);
}

std::ostream &operator<<(std::ostream & s, Fixed const &F)
{
	s << F.toFloat();
	return (s);
}

Fixed &Fixed::operator=(const Fixed &F)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	nb = F.getRawBits();
	return (*this);
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	//std::cout << "* operator called" << std::endl;
	Fixed result;
	result = this->toFloat() * rhs.toFloat();
	return (result);
}
Fixed Fixed::operator ++ (int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}
Fixed &Fixed::operator ++ (void)
{
	nb++;
	return *this;
}
Fixed Fixed::operator+(Fixed const &rhs) const
{
	Fixed result = this->toFloat() + rhs.toFloat();
	return (result);
}
Fixed Fixed::operator-(Fixed const &rhs) const
{
	Fixed result;
	result = this->toFloat() - rhs.toFloat();
	return (result);
}
Fixed Fixed::operator/(Fixed const &rhs) const
{
	Fixed result;
	result = this->toFloat() / rhs.toFloat();
	return (result);
}
bool Fixed::operator>=(Fixed const &rhs) const
{
	return this->getRawBits() >= rhs.getRawBits();
}
bool Fixed::operator<=(Fixed const &rhs) const
{
	return this->getRawBits() <= rhs.getRawBits();
}
bool Fixed::operator>(Fixed const &rhs) const
{
	return this->getRawBits() > rhs.getRawBits();
}
bool Fixed::operator<(Fixed const &rhs) const
{
	return this->getRawBits() < rhs.getRawBits();
}
bool Fixed::operator==(Fixed const &rhs) const
{
	return this->getRawBits() == rhs.getRawBits();
}
bool Fixed::operator!=(Fixed const &rhs) const
{
	return this->getRawBits() != rhs.getRawBits();
}

const Fixed&	Fixed::max( Fixed const & fix1, Fixed const & fix2 )
{
	return fix1 >= fix2 ? fix1 : fix2;
}

Fixed&	Fixed::max( Fixed& fix1, Fixed& fix2 )
{
	return fix1 >= fix2 ? fix1 : fix2;
}
Fixed Fixed::operator--(int)
	{
		Fixed temp = *this;
		--*this;
		return temp;
	}

Fixed &Fixed::operator--(void)
	{
		nb--;
		return *this;
	}
const Fixed&	Fixed::min( Fixed const & fix1, Fixed const & fix2 )
{
	return fix1 <= fix2 ? fix1 : fix2;
}

Fixed&	Fixed::min( Fixed& fix1, Fixed& fix2 )
{
	return fix1 <= fix2 ? fix1 : fix2;
}


