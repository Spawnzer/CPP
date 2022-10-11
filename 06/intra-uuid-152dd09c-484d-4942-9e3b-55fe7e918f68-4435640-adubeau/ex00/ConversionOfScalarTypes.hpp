
#include <iostream>
#include <iomanip>


class ConversionOfScalarTypes{
private:
	std::string literal;
	char	charRes;
	int		intRes;
	float 	floatRes;
	double 	doubleRes;

public:

	ConversionOfScalarTypes();
	~ConversionOfScalarTypes();
	ConversionOfScalarTypes(ConversionOfScalarTypes &rhs);
	ConversionOfScalarTypes &operator=(ConversionOfScalarTypes &rhs);

	void 	setLiteral(char *str);
	void 	getType(std::string literal);
	void 	toChar(void);
	void  	toInt(void);
	void 	toFloat(void);
	void 	toDouble(void);
	void 	printRes(void);

	class NotNumerical : public std::exception {
	public:
		virtual const char *what() const throw();
	};



};