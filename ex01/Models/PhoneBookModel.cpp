#include "PhoneBookModel.hpp"
#include "ContactModel.hpp"

#include <iostream>

ContactModel* PhoneBookModel::getContacts()
{
	return contacts;
}

size_t PhoneBookModel::getContactsCount() {
	size_t count = 0;
	for (size_t i = 0; i < 8; ++i) {
		if (!getContacts()[i].getFirstName().empty())
			count++;
	}
	return count;
}

void PhoneBookModel::addContact(const std::string firstName, const std::string lastName, const std::string nickName, const std::string phoneNumber, const std::string darkestSecret)
{
	ContactModel contact;
	contact.setFirstName(firstName);
	contact.setLastName(lastName);
	contact.setNickName(nickName);
	contact.setPhoneNumber(phoneNumber);
	contact.setDarkestSecret(darkestSecret);
	if (7 < getContactsCount())
	{
		getContacts()[0] = contact;
		std::cout << "PhoneBook is full!" << '\n';
		std::cout << "The first contact has been overwritten!" << std::endl;
		return ;
	}
	if (getContactsCount() == 0)
	{
		getContacts()[0] = contact;
		return ;
	}
	getContacts()[getContactsCount()] = contact;
}

