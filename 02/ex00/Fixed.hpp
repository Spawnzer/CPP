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

class Fixed{
private:
			int nb;
			static const int BITS = 8;
public:
			Fixed(void);
			Fixed(const Fixed &F);
			~Fixed(void);
			Fixed &operator = (const Fixed &F);
			int getRawBits( void ) const;
			void setRawBits( int const raw );
};

#endif