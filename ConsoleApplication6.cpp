
#include <iostream>

int main()
{
	int a{ 0 }, b = { 0 }, c = { 0 };
	int count{ 0 };
	for (int i = 100; i <= 999; i++)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;

		if (a != b && b != c && a != c)
		{
			count++;
		}
	}
	std::cout << count;
	return 0;
}
