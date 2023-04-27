#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));

    bool playAgain = true;

    while (playAgain) {
        int computerChoice = rand() % 3 + 1;
        int playerChoice;

        cout << "Enter your choice (1 = Rock, 2 = Paper, 3 = Scissors, 0 = Quit): ";
        cin >> playerChoice;

        if (playerChoice < 0 || playerChoice > 3) {
            cout << "Invalid input. Please try again." << endl;
            continue;
        }

        if (playerChoice == 0) {
            cout << "Thanks for playing!" << endl;
            break;
        }

        cout << "Computer choice: ";
        if (computerChoice == 1) {
            cout << "Rock" << endl;
        }
        else if (computerChoice == 2) {
            cout << "Paper" << endl;
        }
        else {
            cout << "Scissors" << endl;
        }

        if (playerChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        }
        else if (playerChoice == 1 && computerChoice == 3 ||
            playerChoice == 2 && computerChoice == 1 ||
            playerChoice == 3 && computerChoice == 2) {
            cout << "You win!" << endl;
        }
        else {
            cout << "Computer wins!" << endl;
        }

        char playAgainChar;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgainChar;
        if (playAgainChar != 'y' && playAgainChar != 'Y') {
            playAgain = false;
        }
    }

    return 0;
}