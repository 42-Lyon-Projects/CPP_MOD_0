#ifndef PHONEBOOKVIEW_H
	#define PHONEBOOKVIEW_H
	#include "../Models/ContactModel.hpp"

	class PhoneBookView
	{
		public:
			void displayMenu() const;
			void displayContactList(const Contact* contacts) const;
			void displayContactDetails(const Contact contact) const;
			std::string getInput(const std::string& prompt) const;
	};

#endif //PHONEBOOKVIEW_H
