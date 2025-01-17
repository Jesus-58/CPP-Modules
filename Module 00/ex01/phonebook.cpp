#include "phonebook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	std::cout << "Welcome to your PhoneBook!\n";
	
	std::cout << "Please enter a command (\"ADD\", \"SEARCH\" or \"EXIT\"): " << std::endl;

	while (std::cin >> input)
	{

		if (input.compare("ADD") == 0)
			phonebook.addContact();
		else if (input.compare("SEARCH") == 0)
		{
    		phonebook.displayContacts();
   	 		phonebook.displayContactDetails();

		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "Cleaning phonebook... Goodbye!\n";
			break;
		}
		else
			std::cout << "Write a valid command" << std::endl;
		std::cout << "\nPlease enter the next command (\"ADD\", \"SEARCH\" or \"EXIT\"): " << std::endl;
	}
	return (0);
}
