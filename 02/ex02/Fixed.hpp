/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:15:37 by adubeau           #+#    #+#             */
/*   Updated: 2022/06/24 13:15:39 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <stdio.h>

class Fixed{
private:
			int nb;
			static const int BITS = 8;
public:
			Fixed(void);
			Fixed(int const nb);
			Fixed(float const nb);
			Fixed(const Fixed &F);
			Fixed &operator = (Fixed const &F);
			Fixed operator*(Fixed const &rhs) const;
			Fixed operator+(Fixed const &rhs) const;
			Fixed operator-(Fixed const &rhs) const;
			Fixed operator/(Fixed const &rhs) const;
			bool operator>=(Fixed const &rhs) const;
			bool operator<=(Fixed const &rhs) const;
			bool operator>(Fixed const &rhs) const;
			bool operator<(Fixed const &rhs) const;
			bool operator==(Fixed const &rhs) const;
			bool operator!=(Fixed const &rhs) const;
			Fixed operator++(int);
			Fixed &operator++(void);
			Fixed operator--(int);
			Fixed &operator--(void);
			static const Fixed&	min( Fixed const & fix1, Fixed const & fix2 );
			static Fixed&	min( Fixed& fix1, Fixed& fix2 );
			static const Fixed&	max( Fixed const & fix1, Fixed const & fix2 );
			static Fixed& max( Fixed& fix1, Fixed& fix2 );






	~Fixed(void);
			float 	toFloat( void ) const;
			int		toInt( void ) const;
			int getRawBits( void ) const;
			float getFloat( void ) const;
			int 	getInt( void ) const;
			void setRawBits( int const raw );
};
std::ostream &operator<<(std::ostream &s, Fixed const &F);
#endif