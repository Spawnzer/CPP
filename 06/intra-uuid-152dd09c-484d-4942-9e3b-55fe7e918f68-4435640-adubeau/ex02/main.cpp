#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	std::cout << "Par pointeur:" << std::endl;
	if (a != NULL)
	{
		std::cout << "Object is of type A" << std::endl;
		return ;
	}
	if (b != NULL)
	{
		std::cout << "Object is of type B" << std::endl;
		return ;
	}
	if (c != NULL)
	{
		std::cout << "Object is of type C" << std::endl;
		return ;
	}
}

void identify(Base &p)
{
	std::cout << "Par reference:" << std::endl;

	try {
		A& is_a = dynamic_cast<A&>(p);
		std::cout << "Object is of type A" << std::endl;
		(void)is_a;
	}
	catch (const std::bad_cast& e){

	}
	try {
		B& is_b = dynamic_cast<B&>(p);
		std::cout << "Object is of type B" << std::endl;
		(void)is_b;
	}
	catch (const std::bad_cast& e){

	}
	try {
		C& is_c = dynamic_cast<C&>(p);
		std::cout << "Object is of type C" << std::endl;
		(void)is_c;
	}
	catch (const std::bad_cast& e){

	}
}

Base *generate(void)
{
	std::srand(std::time(0));
	int random_variable = (std::rand()%3);
	switch (random_variable) {
		case 0: std::cout << "A" << std::endl;
			return new A();
			break;

		case 1: std::cout << "B" << std::endl;
			return new B();
			break;

		default: std::cout << "C" << std::endl;
			return new C();
			break;
	}

}

int main()
{
	Base *test;
	Base *test1;
	test = generate();
	test1 = generate();
	identify(*test);
	identify(test1);
	delete test;
	return 0;
}