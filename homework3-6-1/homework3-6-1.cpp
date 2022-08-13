﻿// homework3-6-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "math_functions.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    int a = 0, b = 0, action = 0, res = 0;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : ";
    std::cin >> action;
    switch (action)
    {
    case 1:
        std::cout << a << " + " << b << " = " << addition(a, b) << std::endl;
        break;
    case 2:
        std::cout << a << " - " << b << " = " << subtraction(a, b) << std::endl;
        break;
    case 3:
        std::cout << a << " * " << b << " = " << multiplication(a, b) << std::endl;
        break;
    case 4:
        std::cout << a << " / " << b << " = " << division(a, b) << std::endl;
        break;
    case 5:
        std::cout << a << " в степени " << b << " = " << exponentiation(a, b) << std::endl;
        break;
    default:
        break;
    }

    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
