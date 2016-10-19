#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
    const char VALID_INPUT[] = { 'p', 'r', 's' };

    char player1Choice = ' ';
    char player2Choice = 'p';

    cout << "Let's play Rock, Paper, Scissors. Enter 'R', 'P', or 'S'" << endl;

    cout << "Enter Player 1's move : ";
    cin >> player1Choice;
    player1Choice = tolower(player1Choice);

    bool validInput = false;

    // checks to make sure user entered either 'p', 'r', or 's'
    for (char v : VALID_INPUT) {
        if (player1Choice == v)
            validInput = true;
    }

    if (!validInput) {
        cout << "Invalild input" << endl;
        return -1;
    }

    // get random choice for player 2
    srand(time(0));
    int randNum = rand() % 3;
    if (randNum) {
        if (randNum == 1)
            player2Choice = 'r';
        if (randNum == 2)
            player2Choice = 's';
    }

    cout << "The Computer chose : " << player2Choice << endl;

    // evaluate which player won
    int winningPlayer = 1;

    // assumes player1 wins unless one of these conditions is true
    // only checks the states which the player lost
    if ((player1Choice == 'p' && player2Choice == 's') ||
            (player1Choice == 'r' && player2Choice == 'p') ||
            (player1Choice == 's' && player2Choice == 'r'))
            winningPlayer = 2;

    // check if game was a tie
    if (player1Choice == player2Choice)
        winningPlayer = 0;

    if (winningPlayer == 1)
        cout << "Player wins against computer" << endl;
    else if (winningPlayer == 2)
        cout << "Computer wins against player" << endl;
    else
        cout << "You tied!" << endl;

    return 0;
}
