#include <iostream>
#include <iomanip>
#include "Stack.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    Stack s = Stack();

    int* elCount = new int(0);
    std::cout << "Введите количество элементов:" << std::endl;
    std::cin >> *elCount;

    std::cout << "Введите элементы:" << std::endl;
    int* inp = new int(0);
    for (int i = 0; i < *elCount; i++)
    {
        std::cin >> *inp;
        s.Push(*inp);
    }

    std::cout << "Элементы: ";
    s.PrintElements();

    std::cout << std::endl << "Введите количество вытаскиваемых объектов: " << std::endl;
    int* pullCount = new int(0);
    std::cin >> *pullCount;
    std::cout << "Достаем: " << std::endl;
    for (int i = 0; i < *pullCount; i++)
    {
        std::cout << s.Pop() << std::endl;
    }

    std::cout << "оставшиеся элементы: ";
    s.PrintElements();

    delete elCount;
    delete inp;
    delete pullCount;
}