#ifndef PHONEBOOKCONTROLLER_H
	#define PHONEBOOKCONTROLLER_H

	#include "../Models/PhoneBookModel.hpp"
	#include "../Views/PhoneBookView.hpp"

	class PhoneBookController
	{
		private:
			PhoneBookModel phoneBook;
			PhoneBookView view;
		public:
			void run();
	};

#endif
