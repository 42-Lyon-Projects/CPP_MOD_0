#ifndef PHONEBOOKVIEW_H
	#define PHONEBOOKVIEW_H
	#include "../Models/ContactModel.hpp"

	class PhoneBookView
	{
		public:
			void displayMenu() const;
			void displayContactList(const size_t amount, const ContactModel* contacts) const;
			void displayContactDetails(const ContactModel contact) const;
			std::string getInput(const std::string& prompt) const;
			std::string formatContactString(const std::string value) const;
	};

#endif //PHONEBOOKVIEW_H
