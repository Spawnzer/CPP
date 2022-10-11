#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
	n = 0;
	span.reserve(0);
}

Span::Span(unsigned int n) : n(n)
{
	span.reserve(n);
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	span = rhs.span;
	n = rhs.n;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

unsigned int Span::shortestSpan(void)
{
	Span spanCopy(*this);
	unsigned int r;
	unsigned int t;

	if (this->span.size() < 2)
		throw NotEnoughData();
	sort(spanCopy.span.begin(), spanCopy.span.end());
	for (unsigned int i = spanCopy.span.size(); 0 < i; i--)
	{
		t = spanCopy.span[i] - spanCopy.span[i-1];
		if (r > t)
			r = t;
	}
	return (r);
}

unsigned int Span::longestSpan(void)
{
	if (this->span.size() < 2)
		throw NotEnoughData();

	unsigned int max = std::max_element(this->span.begin(), this->span.end()) - this->span.begin();
	unsigned int min = std::min_element(this->span.begin(), this->span.end()) - this->span.begin();

	return (this->span[max] - this->span[min]);
}

void Span::addNumber(int number)
{
	if (span.size() == n)
		throw VectorIsFull();
	span.push_back(number);
}

/* ************************************************************************** */