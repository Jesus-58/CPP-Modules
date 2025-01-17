#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class	Contact
{
	std::string	name;
	std::string	last_name;
	std::string	nick;
	std::string	secret;
	int		phone_nbr;

public:

	void	ft_set(std::string type, const std::string& value)
	{
		if (type == "name")
			name = value;
		else if (type == "last_name")
			last_name = value;
		else if (type == "nick")
			nick = value;
		else if (type == "secret")
			secret = value;
	}
	
	void	set_nbr(int value){	phone_nbr = value;}
	
	std::string	ft_get(std::string cmp)
	{
		if (cmp == "name")			
			return (name);
		else if (cmp == "last_name")
			return (last_name);
		else if (cmp == "nick")
			return (nick);
		else if (cmp == "secret")
			return (secret);
		else
			return ("Error");
	}
	
	int	get_nbr(){return (phone_nbr);}
};

class   PhoneBook
{
	Contact	contacts[8];
	int	contc_index;

public:

	PhoneBook()
	{
		contc_index = 0;
	}
	
	int	get_contc_index(){return (contc_index);}
	
	void	ft_steps(int pos)
	{
		std::string	value;
        int			nbr;

		std::cout << "\nThe name is: ";
		std::cin >> value;
		contacts[pos].ft_set("name", value);
			    
		std::cout << "\nLast name is: ";
		std::cin >> value;
		contacts[pos].ft_set("last_name", value);
				    
		std::cout << "\nThe nick is: ";
		std::cin >> value;
		contacts[pos].ft_set("nick", value);
				    
		std::cout << "\nThe secret is: ";
		std::cin >> value;
		contacts[pos].ft_set("secret", value);
				    
		std::cout << "\nThe number is: ";
		while (true)
		{
	        if (std::cin >> nbr)
    	    {
    	        contacts[pos].set_nbr(nbr);
    	        break;
    	    }
        	else 
        	{
        		std::cout << "Please enter a valid number: ";
            	std::cin.clear();
            	std::cin.ignore(1000, '\n');
			}
		}
	}
	
    void addContact()
    {
		if (contc_index < 7)
		{
		    ft_steps(contc_index);	    
			contc_index++;
		}
		else
			ft_steps(contc_index);
	}
	
	std::string formatField(const std::string& field)
	{
		if (field.length() > 10)
		    return field.substr(0, 9) + ".";
		else
		    return std::string(10 - field.length(), ' ') + field;
	}

	void displayContacts() 
	{
		std::cout << "|   Index  |First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "-------------------------------------------" << std::endl;
		for (int i = 0; i <= contc_index; ++i)
		{
			std::cout << "|" << std::string(4, ' ') << i + 1 << "   |"
		              << formatField(contacts[i].ft_get("name")) << "|"
		              << formatField(contacts[i].ft_get("last_name")) << "|"
		              << formatField(contacts[i].ft_get("nick")) << "|" << std::endl;
    	}
    }

	void displayContactDetails()
	{
    int index;
    std::cout << "Enter the index of the contact to display: ";
    if (!(std::cin >> index) || index < 1 || index > contc_index + 1)
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Invalid index. Returning to the main menu.\n";
        return;
    }
    Contact& contact = contacts[index - 1];
    std::cout << "First Name: " << contact.ft_get("name") << std::endl;
    std::cout << "Last Name: " << contact.ft_get("last_name") << std::endl;
    std::cout << "Nickname: " << contact.ft_get("nick") << std::endl;
    std::cout << "Secret: " << contact.ft_get("secret") << std::endl;
    std::cout << "Phone Number: " << contact.get_nbr() << std::endl;
}

};

#endif
