#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

class NotEnoughData : public std::exception {
public: virtual const char* what() const throw() { return "Not enough data to find span"; }};

class VectorIsFull : public std::exception {
public: virtual const char* what() const throw() { return "Vector is already Full"; }};

class Span
{

	public:

		Span();
		Span(unsigned int n);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
		void addNumber(int number);
		template<typename Iter>
		void addNumber(Iter first, Iter last)
		{
			for (Iter it = first; it != last; it++)
			{
				addNumber(*it);
			}
		}


private:
			unsigned int n;
			std::vector<int> span;

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */