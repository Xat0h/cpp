#include <iostream>

int doubleNumber(int num) {
    return num * 2;
}

int main() {
    std::cout << "Enter an integer to be doubled: \n";
    int input;
    std::cin >> input;
    std::cout << doubleNumber(input);

    return 0;
}