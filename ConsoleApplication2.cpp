#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");
    int num;
    std::cout << "На какое число нужно вывести таблицу ( 1 до 9) : ";
    std::cin >> num;

    if (num > 0 && num < 10) {
        for (int i = 0; i < 10; i++)
            std::cout << num << " x " << i << " = " << num * i << std::endl;
    }
    else
        std::cout << "Неверный ввод";
    return 0;
}