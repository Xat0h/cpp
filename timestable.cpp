#include <iostream>
#include <limits>

void clearInputStream() {
    std::cin.clear(); // Clear the fail state of the input stream
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore any remaining characters in the input buffer
}

void multiplyTimesTables(int multiplier) {
    for (int i = 0; i <= 12; i++) {
        int result = i * multiplier;
        std::cout << i << " x " << multiplier << " = " << result << std::endl;
    }
}

int main() {
    char choice;

    do {
        int desiredMultiplier;
        std::cout << "Enter the desired multiplier: ";

        while (!(std::cin >> desiredMultiplier)) {
            std::cout << "Invalid input. Please enter an integer: ";
            clearInputStream();
        }

        multiplyTimesTables(desiredMultiplier);

        clearInputStream();

        std::cout << "Do you want to continue? (y/n): ";
        std::cin >> choice;

        clearInputStream();
    } while (choice == 'y' || choice == 'Y');

    return 0;
}