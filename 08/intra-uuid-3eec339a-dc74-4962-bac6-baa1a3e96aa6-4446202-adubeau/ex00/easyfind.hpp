#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class ValueNotFound : public std::exception {
public: virtual const char* what() const throw() { return "Value not found"; }};

template <typename T>
typename T::const_iterator easyfind(T &container, const int &n)
{
	typename T::const_iterator it = find(container.begin(), container.end(), n);
	if (it != container.end())
		return (it);
	else
		throw ValueNotFound();
}