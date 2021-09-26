#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");
	int n1, n2;
	std::cout << "Введите 2 числа\n";
	std::cin >> n1 >> n2;
	int i;
	for (i = 1; i <= n1 && i <= n2; i++) {
		if (n1%i == 0 && n2%i == 0)
			std::cout <<"Остаток: " << i << "\n";
	}

}