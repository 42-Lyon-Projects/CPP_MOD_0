#include "StringUtils.hpp"

bool StringUtils::isPrintable(const std::string str)
{
	for (const char character : str)
	{
		if (!std::isprint(character))
			return false;
	}
	return true;
}

void trim(std::string &str, const char character)
{
	const size_t first = str.find_first_not_of(character);
	const size_t last = str.find_last_not_of(character);
	str = str.substr(first, (last - first + 1));
}

void StringUtils::toUpper(std::string &str)
{
	for (char &character : str)
		character = static_cast<char> (std::toupper(character));
}