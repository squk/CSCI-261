/*
 * Assignment 03
 * Rock, Paper, Scissors, Lizard, Spock
 * Author : Christian Nieves
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

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

    cout << "Enter \"Rock\", \"Paper\", \"Scissors\", \"Lizard\", or \"Spock\" : ";
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
        return -1;
    }


    srand(time(0));
    int randNum = rand() % 5;

    // required swtich statement for assigning computer choice
    switch (randNum) {
        case 0:
            computerChoice = "rock";
            break;
        case 1:
            computerChoice = "paper";
            break;
        case 2:
            computerChoice = "scissors";
            break;
        case 3:
            computerChoice = "lizard";
            break;
        case 4:
            computerChoice = "spock";
            break;
    }

    cout << "Computer chose : " << computerChoice << endl;

    // single if-else
    if (playerChoice == computerChoice)
        cout << "TIE GAME!" << endl;
    else if (playerChoice == "rock" && computerChoice != "lizard" && computerChoice != "scissors")
        cout << "Computer won, " << computerChoice << " beats " << playerChoice << endl;
    else if (playerChoice == "paper" && computerChoice != "rock" && computerChoice != "spock")
        cout << "Computer won, " << computerChoice << " beats " << playerChoice << endl;
    else if (playerChoice == "scissors" && computerChoice != "paper" && computerChoice != "lizard")
        cout << "Computer won, " << computerChoice << " beats " << playerChoice << endl;
    else if (playerChoice == "lizard" && computerChoice != "paper" && computerChoice != "spock")
        cout << "Computer won, " << computerChoice << " beats " << playerChoice << endl;
    else if (playerChoice == "spock" && computerChoice != "rock" && computerChoice != "scissors")
        cout << "Computer won, " << computerChoice << " beats " << playerChoice << endl;
    else
        cout << "Player won, " << playerChoice << " beats " << computerChoice << endl;

    return 0;
}
