#ifndef STRINGUTILS_H
	#define STRINGUTILS_H
	#include <string>

	class StringUtils
	{
		public:
			static bool isPrintable(const std::string str);
			static void trim(std::string &str, const char character);
			static void toUpper(std::string &str);
	};

#endif //STRINGUTILS_H
