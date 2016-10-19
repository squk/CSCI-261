/*
 * Author: Christian Nieves
 * Assignment: AO6
 */

#include <ctime>
#include <iostream>

using namespace std;

struct Card {
    int rank;
    string suit;
};

Card RandomCard() {
    srand(time(0) + rand());
    string suits[4] = { "Clubs", "Spades", "Hearts", "Diamonds"};
    return Card { (rand() % 10) + 1, suits[rand() % 4] };
};

int main() {
    bool playerLikesMyGame = true;
    int playerTotal = 0;
    int dealerTotal = 0;

    while (playerLikesMyGame) {
        Card dealerCard = RandomCard();
        Card playerCard = RandomCard();
        dealerTotal += dealerCard.rank;
        playerTotal += playerCard.rank;
        cout << "Dealer shows the " << dealerCard.rank << " of " << dealerCard.suit << endl;
        cout << "Dealer's total is " << dealerTotal << endl;

        cout << "You were delt a " << playerCard.rank << " of " << playerCard.suit << endl;

        bool standing = false;
        bool playerBusted = false;

        while (playerTotal <= 21 && !standing) {
            string playerChoice;

            playerCard = RandomCard();
            playerTotal += playerCard.rank;
            cout << "You were delt a " << playerCard.rank << " of " << playerCard.suit << endl;
            cout << "Your total is " << playerTotal << endl;
            if (playerTotal > 21)
                break;

            while (playerChoice != "hit" && playerChoice != "stand") {
                cout << "Do you want to \"Hit\" or \"Stand\"?" << endl;
                cin >> playerChoice;
                for (int i=0; i<playerChoice.length(); i++) {
                    playerChoice[i] = tolower(playerChoice[i]);
                }
            }

            if (playerChoice == "stand")
                standing = true;
        }

        if (playerTotal > 21)
            playerBusted = true;

        while (dealerTotal < 17 && !playerBusted) {
            dealerCard = RandomCard();
            dealerTotal += dealerCard.rank;
            cout << "Dealer was delt a " << dealerCard.rank << " of " << dealerCard.suit << endl;
            cout << "Dealer's total is " << dealerTotal << endl;
        }

        if (playerBusted)
            cout << "You busted! Dealer wins. " << endl;
        else if (dealerTotal > 21)
            cout << "Dealer busted! You win. " << endl;
        else if (dealerTotal == playerTotal) {
            cout << "TIE!!!!!!!!!?" << endl;
        }
        else {
            string winner = (playerTotal > dealerTotal) ? "You" : "Dealer";
            cout << winner << " won!" << endl;
        }

        string playAgain;
        while (playAgain != "no" && playAgain != "yes") {
            cout << "Do you want to play again?  \"Yes\" or \"No\"?" << endl;
            cin >> playAgain;
            for (int i=0; i<playAgain.length(); i++) {
                playAgain[i] = tolower(playAgain[i]);
            }
        }

        if (playAgain == "no")
            playerLikesMyGame = false;

        playerTotal = 0;
        dealerTotal = 0;
    }
    return 0;
}
