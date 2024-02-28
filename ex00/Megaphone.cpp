#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	std::string str;
	for (int i = 1; i < argc; i++) {
		for (int j = 0; argv[i][j]; j++) {
			str.append(1,  static_cast<char>(std::toupper(argv[i][j])));
		}
		if (i < argc - 1)
			str.append(1, ' ');
	}
	std::cout << str << std::endl;
}