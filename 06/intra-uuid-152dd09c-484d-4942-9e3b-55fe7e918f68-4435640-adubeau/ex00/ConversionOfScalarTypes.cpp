

#include "ConversionOfScalarTypes.hpp"

ConversionOfScalarTypes::ConversionOfScalarTypes()
{
	//std::cout << "Default constructor" << std::endl;
	this->charRes = '0';
	this->intRes = 0;
	this->floatRes = 0.0f;
	this->doubleRes = 0.0;

}

ConversionOfScalarTypes::~ConversionOfScalarTypes(){/*std::cout << "Default destructor." << std::endl*/;}

ConversionOfScalarTypes::ConversionOfScalarTypes(ConversionOfScalarTypes &rhs)
{
	//std::cout << "Copy constructor." << std::endl;
	*this = rhs;
}
ConversionOfScalarTypes &ConversionOfScalarTypes::operator=(ConversionOfScalarTypes &rhs)
{
	//std::cout << "Copy assigment operator." << std::endl;
	this->charRes = rhs.charRes;
	this->intRes = rhs.intRes;
	this->floatRes = rhs.floatRes;
	this->doubleRes = rhs.doubleRes;

	return (*this);
}

/*bool 	ConversionOfScalarTypes::validateInput(std::string literal)
{

}*/

void ConversionOfScalarTypes::setLiteral(char *str)
{
	std::string s(str);
	this->literal = s;
	this->getType(literal);
}

void 	ConversionOfScalarTypes::getType(std::string literal)
{
	unsigned int c = 0;
	if (literal.find('.') != std::string::npos)
	{
		if (literal.find('f') != std::string::npos)
			this->toFloat();
		else
			this->toDouble();
	}
	for (unsigned int i = 0; i < literal.length(); i++) {
		if (literal[i] == '-' && i == 0)
			c++;
		c += isdigit(literal[i]);
	}
	if (c == literal.length())
		this->toInt();
	else if (literal.length() == 1 && isalpha(literal[0]))
		this->toChar();
	else
		this->toDouble();
}

/*void 	ConversionOfScalarTypes::weirdTypes(void)
{
	if(this.find("nan"))
}*/

void 	ConversionOfScalarTypes::toChar(void)
{
	//std::cout << "toChar conversion" << std::endl;

	if (this->charRes == '0')
		this->charRes =  this->literal.std::string::at(0);

		this->floatRes = static_cast<float>(this->charRes);
		this->intRes = static_cast<int>(this->charRes);
		this->doubleRes = static_cast<double>(this->charRes);

}

void  	ConversionOfScalarTypes::toInt(void)
{
	//std::cout << "toInt conversion " <<  std::endl;

	if (this->intRes == 0)
		this->intRes = stoi(this->literal);

		this->floatRes = static_cast<float>(this->intRes);
		this->charRes = static_cast<char>(this->intRes);
		this->doubleRes = static_cast<double>(this->intRes);
}

void	ConversionOfScalarTypes::toFloat(void)
{
	//std::cout << "toFloat conversion" << std::endl;

	if (this->floatRes== 0)
		this->floatRes = stof(this->literal);

		this->intRes = static_cast<int>(this->floatRes);
		this->charRes = static_cast<char>(this->floatRes);
		this->doubleRes = static_cast<double>(this->floatRes);
}
void 	ConversionOfScalarTypes::toDouble(void)
{
	//std::cout << "toDouble conversion" << std::endl;

	if (this->doubleRes == 0)
		this->doubleRes = stod(this->literal);

		this->floatRes = static_cast<float>(this->doubleRes);
		this->charRes = static_cast<char>(this->doubleRes);
		this->intRes = static_cast<int>(this->doubleRes);


}

void ConversionOfScalarTypes::printRes(void)
{
	if (this->doubleRes == this->doubleRes && this->literal.find("inf") == std::string::npos){
		if (std::isprint(this->charRes))
			std::cout << "char: '" << this->charRes << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << this->intRes << std::endl;
	}
	else {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}

	std::cout << "float: " << std::fixed << std::setprecision(1) <<  this->floatRes << "f" << std::endl;
	std::cout << "double: " << this->doubleRes << std::endl;
}

const char* ConversionOfScalarTypes::NotNumerical::what() const throw()
{
	return "Please retry with a numerical input\n";
}