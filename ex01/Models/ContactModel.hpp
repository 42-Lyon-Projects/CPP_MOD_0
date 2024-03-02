#ifndef CONTACT_HPP
	#define CONTACT_HPP
	#include <string>

	class ContactModel
	{
		private:
			std::string firstName, lastName, nickName;
			std::string phoneNumber, darkestSecret;

		public:
			std::string getFirstName() const;
			std::string getLastName() const;
			std::string getNickName() const;
			std::string getPhoneNumber() const;
			std::string getDarkestSecret() const;

			void setFirstName(const std::string firstName);
			void setLastName(const std::string lastName);
			void setNickName(const std::string nickName);
			void setPhoneNumber(const std::string phoneNumber);
			void setDarkestSecret(const std::string darkestSecret);
	};
#endif
