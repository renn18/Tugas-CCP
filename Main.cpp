#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

void printArray(std::array<int, arraySize> &angka)
{
    std::cout << "Array Angka : ";
    for (int &a : angka)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

void printArray(std::array<char, arraySize> &angka)
{
    std::cout << "Array Huruf : ";
    for (char &a : angka)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::array<int, arraySize> angka = {2, 4, 6, 8, 0, 1, 3, 5, 7, 9};
    std::array<char, arraySize> huruf = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};

    printArray(angka);
    printArray(huruf);

    std::cout << std::endl;

    std::sort(angka.begin(), angka.end());
    printArray(angka);

    std::sort(huruf.begin(), huruf.end());
    printArray(huruf);

    std::cin.get();
    return 0;
}