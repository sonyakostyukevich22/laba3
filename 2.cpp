#include <iostream>
//2

int main()
{
	int a;
	std::cout << "a = " << std::endl;
	std::cin >> a;
	if ( a % 5 == 0 && a % 10 == 0 )
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