/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array .hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:49:46 by adubeau           #+#    #+#             */
/*   Updated: 2022/09/22 14:49:53 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class OutOfBoundsException : public std::exception {
public: virtual const char* what() const throw() { return "Index is out of bound"; }

};

template <typename T>
class Array{
private:
	unsigned int _n;
	T *_data;

public:
	Array() : _n(0), _data(new T[0]){std::cout << "Default constructor called" << std::endl;};
	~Array(){delete[](this->_data); std::cout << "Default constructor called" << std::endl;};
	Array(unsigned int n): _n(n), _data( new T[_n] ){std::cout << "Constructor with unsigned int called" << std::endl;};
	Array(Array &array): _n(array._n){
	std::cout << "Copy constructor called" << std::endl;
		this->_data = new T[_n];
		for (unsigned int i = 0; i < _n; i++)
			_data[i] = i;
	};
	const Array &operator=(Array &array){
		std::cout << "Copy assigment constructor called" << std::endl;
		this->_n = array._n;
		if (this->_data)
			delete [] (this->_data);
		this->_data = new T[_n];
		for (unsigned int i = 0; i < _n; i++)
			_data[i] = i;
		return (*this);
	};
	unsigned int size(){return (this->_n);};
	T & getData(unsigned int n){
		if (n >= this->_n)
			throw OutOfBoundsException();
		return (this->_data[n]);
	};
	T &operator[](unsigned int n){
		return (this->getData(n));
	};
};
