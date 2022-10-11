
#include "ConversionOfScalarTypes.hpp"


int main(int ac, char **av)
{
	ConversionOfScalarTypes conversionOfScalarTypes;

	if (ac != 2) {
		std::cout << "Please retry with a single input" << std::endl;
		exit(0);
	}
	try {
		conversionOfScalarTypes.setLiteral(av[1]);
		conversionOfScalarTypes.printRes();
	}
	catch(std::exception &e) {
		std::cerr << e.what();
	}
}