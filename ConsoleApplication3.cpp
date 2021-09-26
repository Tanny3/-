#include <iostream>
int main()
{
    setlocale(LC_ALL, "rus");
    int num = -1;
    long int sum = 0;
    while (num != 0) {
    std::cout << "Введите число (для выхода из программы  введите 0) : ";
    std::cin >> num;
   
        sum += num;
    }
    std::cout << "\n Сумма введенных чисел = " << sum;

}

