#include <iostream>
//1


int main()
{
	int x;
	std::cout << "x = " << std::endl;
	std::cin >> x;
	int y;
	std::cout << "y = " << std::endl;
	std::cin >> y;
	int z;
	std::cout << "z = " << std::endl;
	std::cin >> z;
	if (x < 7 ^ y < 7 ^ z < 7)
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