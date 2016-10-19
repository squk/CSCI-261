#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    srand(time(0));
    int randNum = rand() % 100;

    // for debugging
    //cout << randNum << endl;

    // -1 so that the player doesn't automatically win by chance
    int playerChoice = -1;
    int attempts = 0;

    while (playerChoice != randNum) {
        attempts++;
        cout << "Pick a number between 1 and 100:";
        cin >> playerChoice;

        if (playerChoice > randNum)
            cout << "Too high! ";
        if (playerChoice < randNum)
            cout << "Too low! ";

        if (abs(playerChoice - randNum) <= 2)
            cout << "Oooh you're close!" << endl;
        else if (abs(playerChoice - randNum) >= 20)
            cout << "Not even close!" << endl;
        else
            cout << endl;
    }

    cout << "That's right! You won the game in " << attempts << " tries." << endl;

    return 0;
}
