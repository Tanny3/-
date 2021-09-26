
#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int a, res;
	double num = 0;
	int i = 0;
	std::cout << "Введите любое целое число: ";
	std::cin >> a;
	while (a != 0) {
		res = a % 10;
		if (res != 3 && res != 6) {
			num += res * pow(10, i);
			i++;
		}
		a /= 10;
	}
	std::cout << "Число без 3 и 6: " << num;
    
}
