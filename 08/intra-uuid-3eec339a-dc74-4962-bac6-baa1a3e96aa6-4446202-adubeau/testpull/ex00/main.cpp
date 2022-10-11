#include "easyfind.hpp"

int main()
{
	std::vector<int> v(10);
	std::string t = "Hello World\n";
	for (unsigned int i = 0; i < v.size(); i++) {
		v[i] = i + 1;
	}
	try{
		easyfind(v, 30);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try{
		easyfind(v, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try{
		easyfind(t, 'l');
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try{
		easyfind(t, 'p');
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


}