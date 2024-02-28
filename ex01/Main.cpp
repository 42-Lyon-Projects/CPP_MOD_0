#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

#include "StringUtils.hpp"

int main()
{
	std::string input;
	PhoneBook phoneBook;

	while (true)
	{
		std::getline(std::cin, input);
		if(!StringUtils::isPrintable(input))
			continue;
		StringUtils::toUpper(input);
		StringUtils::trim(input, ' ');
		if (input.empty())
			continue;

		if (input == "ADD")
		{
			Contact contact = contact.displayContactForm();
			phoneBook.addContact(contact);
			std::cout << "Contact added!" << '\n';
			std::cout << "Back to the main menu" << std::endl;
			PhoneBook::printMainMenu();
			continue;
		}
		if (input == "SEARCH")
		{

			continue;
		}
		if (input == "EXIT")
			PhoneBook::exitPhoneBook();
	}
}
