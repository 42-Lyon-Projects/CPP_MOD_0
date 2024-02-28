#include "PhoneBookModel.hpp"
#include "ContactModel.hpp"

#include <iostream>

Contact* PhoneBook::getContacts()
{
	return contacts;
}

size_t PhoneBook::getContactsCount() const {
	return sizeof(contacts) / sizeof(contacts[0]);
}

void PhoneBook::addContact(const std::string firstName, const std::string lastName, const std::string nickName, const std::string phoneNumber, const std::string darkestSecret)
{
	Contact contact;
	contact.setFirstName(firstName);
	contact.setLastName(lastName);
	contact.setNickName(nickName);
	contact.setPhoneNumber(phoneNumber);
	contact.setDarkestSecret(darkestSecret);
	if (7 < getContactsCount())
	{
		getContacts()[0] = contact;
		std::cout << "PhoneBook is full!" << std::endl;
		return ;
	}
	if (getContactsCount() == 0)
	{
		getContacts()[0] = contact;
		return ;
	}
	getContacts()[getContactsCount()] = contact;
}

