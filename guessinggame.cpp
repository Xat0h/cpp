#include <iostream>

using namespace std;

int main()
{
    cout << "Guessing game!\n";

    int num = 100;
    int attempts = 7;
    srand(time(NULL));
    int randomNumber = rand() % 100 + 1;
    int guess;

    cout << "Guess a number between " << "1" << " and " << num << "\n";
      
    for (int i = 0; i < attempts; i++) {
        
        cout << "You have " << attempts - i << " attempts" << "\n";
        cout << "Enter your guess\n";
        cin >> guess;
        if (guess == randomNumber) {
            cout << "Correct!";
            attempts = 0;
        }
        else {
            if (guess < randomNumber) {
                cout << "Too low\n";
            }
            else if (guess > randomNumber) {
                cout << "Too high\n";
            }
            else {
                cout << "Invalid Input. Try again.";
                attempts - 1;
            }
        }
    }

    if (guess != randomNumber) {
        cout << "The correct answer was " << randomNumber << "\n";
        cout << "You lose. Continue?";
    }
    else if (guess == randomNumber) {
        cout << "You won! The answer was " << randomNumber << "!\n";
    }
    else {
        cout << "ERROR";
    }

}

