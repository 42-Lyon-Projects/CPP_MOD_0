//
// Created by jimmy on 01/03/24.
//

#include "PhoneBookController.hpp"

#include <iostream>

#include "../Utils/StringUtils.hpp"

void PhoneBookController::run()
{
	std::string input;
	while (true)
	{
		this->view.displayMenu();
		input = view.getInput("Please enter a command: ");
		StringUtils::toUpper(input);
		if (input == "ADD")
		{
			const std::string firstName = view.getInput("First Name: ");
			const std::string lastName = view.getInput("Last Name: ");
			const std::string nickName = view.getInput("Nick Name: ");
			std::string phoneNumber = view.getInput("Phone Number: ");
			while (!StringUtils::isOnlyDigits(phoneNumber))
				phoneNumber = view.getInput("😲 Phone Number must contain only digits, please try again: ");
			const std::string darkestSecret = view.getInput("Darkest Secret: ");
			this->phoneBook.addContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
			std::cout << "\nContact Added Successfully ! \n";
			std::cout << " >> Back to Main Menu.\n" << std::endl;
		}
		else if (input == "SEARCH")
			this->view.displayContactList(this->phoneBook.getContactsCount(), this->phoneBook.getContacts());
		else if (input == "EXIT")
			break;
	}
}
