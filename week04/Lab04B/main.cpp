/*
 * Lab04B
 * Rock, Paper, Scissors, Lizard, Spock
 * Author : Christian Nieves
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    string playerChoice, computerChoice;
    const int NUM_CHOICES = 5;
    const string VALID_CHOICES[NUM_CHOICES] = { "rock", "paper", "scissors", "lizard", "spock" };
    // ROCK     > LIZARD and  SCISSORS
    // PAPER    > ROCK and SPOCK
    // SCISSORS > PAPER and LIZARD
    // LIZARD   > PAPER and SPOCK
    // SPOCK    > ROCK and SCISSORS

    int rounds = 0;
    int playerWins, computerWins, tieGames;
    cout << "How many rounds would you like to play? ";
    cin >> rounds;
    cout << setprecision(2) << fixed;

    for (int roundsPlayed = 0; roundsPlayed < rounds; roundsPlayed++) {
        cout << endl << "Enter \"Rock\", \"Paper\", \"Scissors\", \"Lizard\", or \"Spock\" : ";
        cin >> playerChoice;

        // make playerchoice lowercase
        for (int i=0; i < playerChoice.length(); i++) {
            playerChoice[i] = towlower(playerChoice[i]);
        }

        //validate user input
        bool choiceFound = false;
        for (int i=0; i < NUM_CHOICES; i++) {
            if (VALID_CHOICES[i] == playerChoice)
                choiceFound = true;
        }
        if (!choiceFound) {
            cout <<"\"" << playerChoice << "\" is an invalid choice. " << endl;
            roundsPlayed--;
            continue;
        }


        srand(time(0));
        computerChoice = VALID_CHOICES[rand() % 5];

        cout << "Computer chose : " << computerChoice << endl;

        if (playerChoice == computerChoice) {
            tieGames++;
            cout << "TIE GAME!" << endl;
        }
        else if (playerChoice == "rock" && computerChoice != "lizard" && computerChoice != "scissors") {
            computerWins++;
            cout << "Computer won, " << computerChoice << " beats " << playerChoice << endl;
        }
        else if (playerChoice == "paper" && computerChoice != "rock" && computerChoice != "spock") {
            computerWins++;
            cout << "Computer won, " << computerChoice << " beats " << playerChoice << endl;
        }
        else if (playerChoice == "scissors" && computerChoice != "paper" && computerChoice != "lizard") {
            computerWins++;
            cout << "Computer won, " << computerChoice << " beats " << playerChoice << endl;
        }
        else if (playerChoice == "lizard" && computerChoice != "paper" && computerChoice != "spock") {
            computerWins++;
            cout << "Computer won, " << computerChoice << " beats " << playerChoice << endl;
        }
        else if (playerChoice == "spock" && computerChoice != "rock" && computerChoice != "scissors") {
            computerWins++;
            cout << "Computer won, " << computerChoice << " beats " << playerChoice << endl;
        }
        else {
            playerWins++;
            cout << "Player won, " << playerChoice << " beats " << computerChoice << endl;
        }

    }

    cout << "Your record: " << playerWins << "-" << computerWins << "-" << tieGames;
    cout << " (" << ((float)playerWins/(float)(playerWins+computerWins))*100.0 << "%)" << endl;


    return 0;
}
