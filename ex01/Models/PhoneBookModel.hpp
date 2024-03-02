#ifndef PHONEBOOK_HPP
	#define PHONEBOOK_HPP
	#include "./ContactModel.hpp"

	class PhoneBookModel
	{
		ContactModel contacts[8];
		public:
			void addContact(const std::string firstName, const std::string lastName, const std::string nickName, const std::string phoneNumber, const std::string darkestSecret);
			ContactModel* getContacts();
			size_t getContactsCount();
	};

#endif //PHONEBOOK_HPP
