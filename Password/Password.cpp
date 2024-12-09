#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;			//if entering every password that has exactly 16 chars in it, the password will be considered correct and will get into the "system"

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
