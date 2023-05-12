#include <iostream>

int doubleNumber(int input)
{
    return 2 * input;
}

int main()
{
    int input{};
    std::cout << "Enter an integer to be doubled" << std::endl;
    std::cin >> input;
    std::cout << doubleNumber(input) << '\n';
    return 0;
}