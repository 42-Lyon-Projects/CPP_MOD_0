#include "ContactModel.hpp"
#include <iostream>

std::string ContactModel::getFirstName() const
{
	return firstName;
}
std::string ContactModel::getLastName() const
{
	return lastName;
}
std::string ContactModel::getNickName() const
{
	return nickName;
}
std::string ContactModel::getPhoneNumber() const
{
	return phoneNumber;
}
std::string ContactModel::getDarkestSecret() const
{
	return darkestSecret;
}

void ContactModel::setFirstName(const std::string firstName)
{
	this->firstName = firstName;
}
void ContactModel::setLastName(const std::string lastName)
{
	this->lastName = lastName;
}
void ContactModel::setNickName(const std::string nickName)
{
	this->nickName = nickName;
}
void ContactModel::setPhoneNumber(const std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
void ContactModel::setDarkestSecret(const std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

