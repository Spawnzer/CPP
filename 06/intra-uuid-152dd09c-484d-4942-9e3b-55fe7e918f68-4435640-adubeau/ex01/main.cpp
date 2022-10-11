#include "Serialize.hpp"

std::ostream& operator << (std::ostream &o, Data *myData)
{
	o << "Name = " << myData->name << std::endl << "Age = " << myData->age << std::endl;

	return (o);
}

uintptr_t serialize(Data* ptr)
{
	uintptr_t res = reinterpret_cast<uintptr_t>(ptr);

	return (res);
}

Data* deserialize(uintptr_t raw)
{
	Data *res = reinterpret_cast<Data*>(raw);

	return (res);
}

int main()
{
	Data *myData = new Data;
	myData->name = "Alex";
	myData->age = 29;

	std::cout << "Before Serialization: " << std::endl << myData;
	uintptr_t res = serialize(myData);
	Data *deserialized = deserialize(res);
	std::cout << "After Serialization: " << std::endl << deserialized;

	delete myData;
}