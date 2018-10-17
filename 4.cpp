#include <iostream>
//4
 
int f(int a)
{
	if (a % 2 == 0 && a / 1000 != 0)
	{
		a = a + 1;
		return a * 5;
	} 
	a = a - 2;
	return a * 5;
}

int main()
{
	std::cout << f(123) << std::endl;
	system("pause");
	return 0;
}