/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:58:58 by adubeau           #+#    #+#             */
/*   Updated: 2022/09/22 13:58:59 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T>
void	iter(T *tab, int len, void (*fun)(T &)){
	for (int i = 0; i < len; i++)
	{
		fun(tab[i]);
	}
	return ;
}
class Awesome {

public:

	Awesome(void) : _n(42) { return; }

	int get(void) const { return this->_n; }

private:

	int _n;
};

	std::ostream &operator<<(std::ostream &o, Awesome const &rhs) {
		o << rhs.get();
		return o;
	}


	template< typename T >
	void print( T & x ) { std::cout << x << std::endl; return; }