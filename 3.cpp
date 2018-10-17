#include <iostream>
//3

int main()
{
	int a;
	std::cout << "a = " << std::endl;
	std::cin >> a;
	if (a / 100000 == 0 && a / 10000 != 5)
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}

	system("pause");
	return 0;
}