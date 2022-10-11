/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:32:38 by adubeau           #+#    #+#             */
/*   Updated: 2022/10/11 09:32:40 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#include <list>


template <typename T>
class MutantStack : public std::stack<T>
        {
public:

	MutantStack(){}
	MutantStack(MutantStack const &copy) : std::stack<T>(copy.c){};
	~MutantStack(){}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin()
	{
		return std::stack<T>::c.begin();
	}
	iterator end()
	{
		return std::stack<T>::c.end();
	}

private:


};

#endif /* ************************************************************ MUTANTSTACK_HPP */

