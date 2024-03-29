//
// Created by jimmy on 28/02/24.
//
#include <iostream>
#include <cstdlib>
#include <cerrno>
#include "PhoneBookView.hpp"
#include "../Utils/StringUtils.hpp"

void PhoneBookView::displayMenu() const {
    std::cout << "Phone Book Menu" << '\n';
    std::cout << "----------------" << '\n';
    std::cout << "↪️ ADD - Add a new contact" << '\n';
    std::cout << "↪️ SEARCH - Search for a contact" << '\n';
    std::cout << "↪️ EXIT - Exit the program" << '\n';
    std::cout << "----------------" << '\n';
    std::cout << std::endl;
}

std::string PhoneBookView::formatContactString(const std::string value) const {
    std::string line;
    if (value.size() > 10)
        return value.substr(0, 9) + ".";
    line.append(10 - value.size(), ' ').append(value);
    return line;
}

static bool handleStrtolErrors() {
    if (errno == ERANGE)
        std::cout << "😦 Invalid input, possibly is out of range !" << std::endl;
    else if (errno != 0)
        std::cout << "😦 Invalid input." << std::endl;
    return errno == 0;
}

void PhoneBookView::displayContactList(const size_t amount, const ContactModel *contacts) const {
    if (amount == 0) {
        std::cout << "\n>> No contacts found !\n" << std::endl;
        return;
    }
    std::cout << "_____________________________________________\n";
    std::cout << "|  Index   |First Name| LastName | Nickname |\n";
    std::cout << "|----------|----------|----------|----------|\n";
    for (size_t i = 0; i < amount; ++i) {
        ContactModel contact = contacts[i];
        std::cout << "|         " << i;
        std::cout << "|" << formatContactString(contact.getFirstName());
        std::cout << "|" << formatContactString(contact.getLastName());
        std::cout << "|" << formatContactString(contact.getNickName()) << "|\n";
    }
    std::cout << "|__________|__________|__________|__________|\n" << std::endl;
    const std::string inputPrompt = ">> Please insert the index of the contact you want to see: ";
    std::string strIndex = getInput(inputPrompt);
    while (!StringUtils::isOnlyDigits(strIndex)) {
        std::cout << "😦 Invalid input, index must contain only digits !" << std::endl;
        strIndex = getInput(inputPrompt);
    }
    errno = 0;
    int index = std::strtol(strIndex.c_str(), NULL, 10);
    if (!handleStrtolErrors()) {
        displayContactList(amount, contacts);
        return;
    }
    while (index > static_cast<int> (amount - 1) || index < 0) {
        std::cout << "Invalid index, valid range : [0-" << amount - 1 << ']' << std::endl;
        strIndex = getInput(inputPrompt);
        errno = 0;
        index = std::strtol(strIndex.c_str(), NULL, 10);
        if (!handleStrtolErrors()) {
            displayContactList(amount, contacts);
            return;
        }
    }
    displayContactDetails(contacts[index]);
}

void PhoneBookView::displayContactDetails(const ContactModel contact) const {
    std::cout << "Contact Details" << '\n';
    std::cout << "----------------" << '\n';
    std::cout << "First Name: " << contact.getFirstName() << '\n';
    std::cout << "Last Name: " << contact.getLastName() << '\n';
    std::cout << "Nick Name: " << contact.getNickName() << '\n';
    std::cout << "Phone Number: " << contact.getPhoneNumber() << '\n';
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << '\n';
    std::cout << "----------------" << '\n';
    std::cout << std::endl;
}

std::string PhoneBookView::getInput(const std::string &prompt) const {
    std::string input;
    std::cout << prompt;
    bool good = false;
    while (!good) {
        std::getline(std::cin, input);
        if (std::cin.eof() || std::cin.bad() || std::cin.fail()) {
            std::cout << "\n⛔ Le programme ne peux pas continuer, arrêt en cours..." << std::endl;
            exit(1);
        }
        if (!StringUtils::isAscii(input)) {
            std::cout << "😦 Invalid input, some character is non ascii !" << std::endl;
            continue;
        }
        if (!StringUtils::isPrintable(input)) {
            std::cout << "😦 Invalid input, some character is non printable !" << std::endl;
            continue;
        }
        if (StringUtils::isOnlyWhitespace(input)) {
            std::cout << "😦 Invalid input, you must enter something !" << std::endl;
            continue;
        }
        if (input.empty())
            continue;
        StringUtils::trim(input, ' ');
        good = true;
    }
    return input;
}
