#include <iostream>
#include <stdlib.h>

using namespace std;


int main (void) {
    unsigned int secret;

    srand (time(NULL));

    unsigned int guess = 0;
    bool playing = true;
    char newGame;
    do {

    secret = rand() % 20 + 1;

    cout << "I'm thinking of a number between 1 and 20. Can you guess what it is?" << endl;

    do {
        cin >> guess;

        if(guess == secret) {
            playing = false;
            continue;
        }
        if(guess == secret+1 || guess == secret-1) {
            cout << "very close ";
        }

        if(guess > secret) {
            cout << "To high" << endl;
            continue;
        }

        if (guess < secret) {
            cout << "To low" << endl;
            continue;
        }

    } while(playing);

    cout << "Well done! you win" << endl << "Play again [y/n]" << endl;
    cin >> newGame;

    if (newGame == 'y') playing = true;
    } while(playing);
    return 0;
}

