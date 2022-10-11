/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:35:27 by adubeau           #+#    #+#             */
/*   Updated: 2022/10/11 09:35:30 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "MutantStack \n" << "top = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size = " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}/*
	MutantStack<int> m(mstack);
	m.push(5);
	m.push(17);
	std::cout << "top = " << m.top() << std::endl;
	m.pop();
	std::cout << "size = "<< m.size() << std::endl;
	m.push(3);
	m.push(5);
	m.push(737);
	m.push(0);
	MutantStack<int>::iterator it1 = m.begin();
	MutantStack<int>::iterator ite1 = m.end();

	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
*/
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << "List \n" << "back = " << lst.back() << std::endl;
	lst.pop_back();
	std::cout<< "size = " << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	std::list<int>::iterator it2 = lst.begin();
	std::list<int>::iterator ite2 = lst.end();

	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
}
