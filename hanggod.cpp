#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

using namespace std;

int main()
{
    string words[30];
    words[0] = "pneumonoultramicroscopicsilicovolcanoconiosis";
    words[1] = "supercalifragilisticexpialidocious";
    words[2] = "floccinaucinihilipilification";
    words[3] = "antidisestablishmentarianism";
    words[4] = "immunoelectrophoretically";
    words[5] = "honorificabilitudinitatibus";
    words[6] = "electroencephalographically";
    words[7] = "thyroparathyroidectomized";
    words[8] = "radioimmunoelectrophoresis";
    words[9] = "dichlorodifluoromethane";
    words[10] = "incomprehensibilities";
    words[11] = "psychoneuroendocrinological";
    words[12] = "ethylenediaminetetraacetates";
    words[13] = "counterrevolutionaries";
    words[14] = "unexceptionableness";
    words[15] = "reinstitutionalizing";
    words[16] = "otorhinolaryngologies";
    words[17] = "photolithographically";
    words[18] = "spectrophotometrically";
    words[19] = "microminiaturizations";
    words[20] = "deinstitutionalization";
    words[21] = "indistinguishabilities";
    words[22] = "overintellectualizations";
    words[23] = "semiautomatically";
    words[24] = "disproportionableness";
    words[25] = "psychophysiological";
    words[26] = "psychopharmacologists";
    words[27] = "psychotomimetically";
    words[28] = "dichlorodiphenyltrichloroethane";
    words[29] = "trinitrophenylmethylnitramine";

    srand(time(NULL));
    string randomWord = words[rand() % 30];
    int wordLength = randomWord.length();
    string hiddenWord(wordLength, '_');
    cout << "The word to guess is: " << hiddenWord << endl;
    const int MAX_GUESSES = 6;
    int remainingGuesses = MAX_GUESSES;

    while (remainingGuesses > 0) {
        cout << "Guess a letter: ";
        char guess;
        cin >> guess;

        bool correctGuess = false;
        for (int i = 0; i < wordLength; i++) {
            if (randomWord[i] == guess) {
                hiddenWord[i] = guess;
                correctGuess = true;
            }
        }

        cout << "The word to guess is: " << hiddenWord << endl;

        if (hiddenWord == randomWord) {
            cout << "Congratulations, you have guessed the word!" << endl;
            break;
        }
        else if (!correctGuess) {
            cout << "Sorry, the letter is not present in the word." << endl;
            remainingGuesses--;
            cout << "You have " << remainingGuesses << " guesses remaining." << endl;
        }
    }

    if (remainingGuesses == 0) {
        cout << "Sorry, you have run out of guesses. The word was: " << randomWord << endl;
    }
    
    return 0;
}