#include <iostream>

using namespace std;

int main() {
    int input;

    cout << "Enter a number between one and six\n";
    cin >> input;

    if (input == 1) {
        cout << "Mewtwo";
    }
    else if (input == 2) {
        cout << "Gyarados";
    }
    else if (input == 3) {
        cout << "Weavile";
    }
    else if (input == 4) {
        cout << "Tyranitar";
    }
    else if (input == 5) {
        cout << "Kyogre";
    }
    else if (input == 6) {
        cout << "Raikou";
    }
    else {
        cout << "Invalid Input";
    }

    //Add: 
    //    stats of each pokemon
    //    moves of each pokemon
    //    list of all first 3gen pokemon with the chosen ones highlighted

}