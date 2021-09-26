#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int x, y, res{1};
	std::cout << "Введите x для возведения в степень y ";
	std::cin >> x >> y;
	for (int i = 0; i < y; ++i)
		res *= x;
	std::cout << x << " в степени " << y << " = " << res;
	return 0;

}