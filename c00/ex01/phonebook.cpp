#include "phonebook.hpp"

void	emptyLine()
{
		std::cout << "|                                |\n";
}

void	addContact()
{

}

void	getCmd(std::string input, Phonebook phonebook)
{
	if (input == "ADD")
		phonebook.addContact();
	else if (input == "SEARCH")
		phonebook.search();
}

void	menu()
{
		std::cout << "|================================|\n";
		emptyLine();
		std::cout << "|--THIS IS A PHONEBOOK, I GUESS--|\n";
		emptyLine();
		std::cout << "|================================|\n";
		emptyLine();
		std::cout << "|--------PLEASE SELECT ONE-------|\n";
		std::cout << "|----OF THE FOLLOWING OPTIONS----|\n";
		emptyLine();
		std::cout << "|------[ADD] A NEW CONTACT-------|\n";
		emptyLine();
		std::cout << "|[SEARCH] FOR AN EXISTING CONTACT|\n";
		emptyLine();
		std::cout << "|------[EXIT] THIS PROGRAM-------|\n";
		emptyLine();
		std::cout << "|================================|\n";
}

int	main()
{
	std::string input;
	Phonebook	phonebook;

	while (1)
	{
		menu();
		std::cin >> input;
		getCmd(phonebook, input);
		if (input == "EXIT")
			break ;
	}
	emptyLine();
	std::cout << "|------------GOODBYE-------------|\n"
}
