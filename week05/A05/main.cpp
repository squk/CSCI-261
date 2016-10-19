/*
 * CSCI 261 A05
 * Author: Christian Nieves
 */

#include "YahtzeeFunctions.h"

#include <iomanip>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int RollDie() {
    srand(time(0) + rand());
    return (rand() % 6) + 1;
}

void RollDice(int &die1, bool hold1, int &die2, bool hold2, int &die3, bool hold3,
        int &die4, bool hold4, int &die5, bool hold5)
{
    if (!hold1)
        die1 = RollDie();
    if (!hold2)
        die2 = RollDie();
    if (!hold3)
        die3 = RollDie();
    if (!hold4)
        die4 = RollDie();
    if (!hold5)
        die5 = RollDie();
}

void PrintScoreCard(int die1, int die2, int die3, int die4, int die5, int
        onesScore, int twosScore, int threesScore, int foursScore, int
        fivesScore, int sixesScore, int threeOfAKindScore, int
        fourOfAKindScore, int smallStraightScore, int largeStraightScore, int
        fullHouseScore, int yahtzeeScore, int chanceScore) {

    int dice[5] = { die1, die2, die3, die4, die5 };

    int onesScoreCurrent = ScoreOnes(dice[0], dice[1], dice[2], dice[3], dice[4]);
    int twosScoreCurrent = ScoreTwos(dice[0], dice[1], dice[2], dice[3], dice[4]);
    int threesScoreCurrent = ScoreThrees(dice[0], dice[1], dice[2], dice[3], dice[4]);
    int foursScoreCurrent = ScoreFours(dice[0], dice[1], dice[2], dice[3], dice[4]);
    int fivesScoreCurrent = ScoreFives(dice[0], dice[1], dice[2], dice[3], dice[4]);
    int sixesScoreCurrent = ScoreSixes(dice[0], dice[1], dice[2], dice[3], dice[4]);
    int threeOfAKindScoreCurrent = ScoreThreeOfAKind(dice[0], dice[1], dice[2], dice[3], dice[4]);
    int fourOfAKindScoreCurrent = ScoreFourOfAKind(dice[0], dice[1], dice[2], dice[3], dice[4]);
    int smallStraightScoreCurrent = ScoreSmallStraight(dice[0], dice[1], dice[2], dice[3], dice[4]);
    int largeStraightScoreCurrent = ScoreLargeStraight(dice[0], dice[1], dice[2], dice[3], dice[4]);
    int fullHouseScoreCurrent = ScoreFullHouse(dice[0], dice[1], dice[2], dice[3], dice[4]);
    int yahtzeeScoreCurrent = ScoreYahtzee(dice[0], dice[1], dice[2], dice[3], dice[4]);
    int chanceScoreCurrent = ScoreChance(dice[0], dice[1], dice[2], dice[3], dice[4]);

    cout << setfill('-');
    cout << "+" << setw(20)  << "-" << "+" << setw(11) << "-" << "+" << endl;
    cout << setfill(' ');
    cout << "| " << left << setw(19) << " Category: " <<  "|  " << "Score    |" << endl;
    cout << setfill('-');
    cout << "+" << setw(20)  << "-" << "+" << setw(11) << "-" << "+" << endl;
    cout << setfill(' ');
    cout << "| " << left << setw(19) << "(1) Ones: " << "|  " << setw(4) << (!onesScoreCurrent ? "  " : to_string(onesScoreCurrent)) << " " << (onesScore == -1 ? "  " : to_string(onesScore)) << "  |" << endl;
    cout << "| " << left << setw(19) << "(2) Twos: " << "|  " << setw(4) << (!twosScoreCurrent ? "  " : to_string(twosScoreCurrent))  << " " << (twosScore == -1 ? "  " : to_string(twosScore)) << "  |" << endl;
    cout << "| " << left << setw(19) << "(3) Threes: " << "|  " << setw(4) << (!threesScoreCurrent ? "  " : to_string(threesScoreCurrent)) << " " << (threesScore == -1 ? "  " : to_string(threesScore)) << "  |" << endl;
    cout << "| " << left << setw(19) << "(4) Fours: " << "|  " << setw(4)<< (!foursScoreCurrent ? "  " : to_string(foursScoreCurrent)) << " " << (foursScore == -1 ? "  " : to_string(foursScore)) << "  |" << endl;
    cout << "| " << left << setw(19) << "(5) Fives: " << "|  " << setw(4)<< (!fivesScoreCurrent ? "  " : to_string(fivesScoreCurrent)) << " " << (fivesScore == -1 ? "  " : to_string(fivesScore)) << "  |" << endl;
    cout << "| " << left << setw(19) << "(6) Sixes: " << "|  " << setw(4)<<  (!sixesScoreCurrent ? "  " : to_string(sixesScoreCurrent)) << " " << (sixesScore == -1 ? "  " : to_string(sixesScore)) << "  |" << endl;
    cout << "| " << left << setw(19) << "(7) Three Kind: " << "|  " << setw(4) << (!threeOfAKindScoreCurrent ? "  " : to_string(threeOfAKindScoreCurrent)) << " " << (threeOfAKindScore == -1 ? "  " : to_string(threeOfAKindScore)) << "  |" << endl;
    cout << "| " << left << setw(19) << "(8) Four Kind: " << "|  " << setw(4)<< (!fourOfAKindScoreCurrent ? "  " : to_string(fourOfAKindScoreCurrent)) << " " << (fourOfAKindScore == -1 ? "  " : to_string(fourOfAKindScore)) << "  |" << endl;
    cout << "| " << left << setw(19) << "(9) Full House: " << "|  " << setw(4)<< (!fullHouseScoreCurrent ? "  " : to_string(fullHouseScoreCurrent)) << " " << (fullHouseScore == -1 ? "  " : to_string(fullHouseScore)) << "  |" << endl;
    cout << "| " << left << setw(19) << "(a) S Straight: " << "|  " << setw(4)<< (!smallStraightScoreCurrent ? "  " : to_string(smallStraightScoreCurrent)) << " " << (smallStraightScore == -1 ? "  " : to_string(smallStraightScore)) << "  |" << endl;
    cout << "| " << left << setw(19) << "(b) L Straight: " << "|  " << setw(4)<< (!largeStraightScoreCurrent ? "  " : to_string(largeStraightScoreCurrent)) << " " << (largeStraightScore == -1 ? "  " : to_string(largeStraightScore)) << "  |" << endl;
    cout << "| " << left << setw(19) << "(c) Yahtzee: " << "|  " << setw(4)<< (!yahtzeeScoreCurrent ? "  " : to_string(yahtzeeScoreCurrent)) << " " << (yahtzeeScore == -1 ? "  " : to_string(yahtzeeScore)) << "  |" << endl;
    cout << "| " << left << setw(19) << "(d) Chance: " <<  "|  " << setw(4)<< (!chanceScoreCurrent ? "  " : to_string(chanceScoreCurrent)) << " " << (chanceScore == -1 ? "  " : to_string(chanceScore)) << "  |" << endl;
    cout << setfill('-');
    cout << "+" << setw(20)  << "-" << "+" << setw(11) << "-" << "+" << endl;
    cout << setfill(' ');

    int total = 0;
    if (onesScore != -1)
        total += onesScore;
    if (twosScore != -1)
        total += twosScore;
    if (threesScore != -1)
        total += threesScore;
    if (foursScore != -1)
        total += foursScore;
    if (fivesScore != -1)
        total += fivesScore;
    if (sixesScore != -1)
        total += sixesScore;
    if (threeOfAKindScore != -1)
        total += threeOfAKindScore;
    if (fourOfAKindScore != -1)
        total += fourOfAKindScore;
    if (fullHouseScore != -1)
        total += fullHouseScore;
    if (smallStraightScore != -1)
        total += smallStraightScore;
    if (largeStraightScore != -1)
        total += largeStraightScore;
    if (yahtzeeScore != -1)
        total += yahtzeeScore;
    if (chanceScore != -1)
        total += chanceScore;


    cout << "| " << left << setw(19) << " Total: " <<  setw(7) << "|  " << total << "    |" << endl;
    cout << setfill('-');
    cout << "+" << setw(20)  << "-" << "+" << setw(11) << "-" << "+" << endl;
}

int main() {
    int dice[5] = {0};
    bool held[5] = {0};

    int onesScore = -1;
    int twosScore = -1;
    int threesScore = -1;
    int foursScore = -1;
    int fivesScore = -1;
    int sixesScore = -1;
    int threeOfAKindScore = -1;
    int fourOfAKindScore = -1;
    int smallStraightScore = -1;
    int largeStraightScore = -1;
    int fullHouseScore = -1;
    int yahtzeeScore = -1;
    int chanceScore = -1;

    for (int rolls = 0; rolls< 3; rolls++) {
        cout << endl << "You rolled ";
        RollDice(dice[0], held[0], dice[1], held[1], dice[2], held[2], dice[3], held[3], dice[4], held[4]);
        SortDice(dice[0], dice[1], dice[2], dice[3], dice[4]);
        for (int i = 0; i < 5; i++) {
            cout << " " << dice[i] << " ";
        }
        cout << endl;

        if (rolls) {
            for (int i = 0; i < 5; i++) {
                cout << "Do you want to hold die " << i+1 << "? (Y/N)";
                held[i] = toupper(cin.get()) == 'Y';
                cin.ignore();
                cout << held[i] << endl;
            }
        }

        PrintScoreCard(dice[0], dice[1], dice[2], dice[3], dice[4], onesScore,
                twosScore, threesScore, foursScore, fivesScore, sixesScore,
                threeOfAKindScore, fourOfAKindScore, smallStraightScore,
                largeStraightScore, fullHouseScore, yahtzeeScore, chanceScore);
        char scoreMe = 0;

    scorePlayer:
        cout << endl;
        cout << "Select which category to score: ";
        cin >> scoreMe;
        switch (scoreMe) {
            case '1':
                if (onesScore == -1)
                    onesScore++;
                onesScore += ScoreOnes(dice[0], dice[1], dice[2], dice[3], dice[4]);
                break;
            case '2':
                if (twosScore == -1)
                    twosScore++;
                twosScore += ScoreTwos(dice[0], dice[1], dice[2], dice[3], dice[4]);
                break;
            case '3':
                if (threesScore == -1)
                    threesScore++;
                threesScore += ScoreThrees(dice[0], dice[1], dice[2], dice[3], dice[4]);
                break;
            case '4':
                if (foursScore == -1)
                    foursScore++;
                foursScore += ScoreFours(dice[0], dice[1], dice[2], dice[3], dice[4]);
            case '5':
                if (fivesScore == -1)
                    fivesScore++;
                fivesScore += ScoreFives(dice[0], dice[1], dice[2], dice[3], dice[4]);
                break;
            case '6':
                if (sixesScore == -1)
                    sixesScore++;
                sixesScore += ScoreSixes(dice[0], dice[1], dice[2], dice[3], dice[4]);
                break;
            case '7':
                if (threeOfAKindScore == -1)
                    threeOfAKindScore++;
                threeOfAKindScore += ScoreThreeOfAKind(dice[0], dice[1], dice[2], dice[3], dice[4]);
                break;
            case '8':
                if (fourOfAKindScore == -1)
                    fourOfAKindScore++;
                fourOfAKindScore += ScoreFourOfAKind(dice[0], dice[1], dice[2], dice[3], dice[4]);
                break;
            case '9':
                if (fullHouseScore == -1)
                    fullHouseScore++;
                fullHouseScore += ScoreFullHouse(dice[0], dice[1], dice[2], dice[3], dice[4]);
                  break;
            case 'a':
                if (smallStraightScore == -1)
                    smallStraightScore++;
                  smallStraightScore += ScoreSmallStraight(dice[0], dice[1], dice[2], dice[3], dice[4]);
                  break;
            case 'b':
                if (largeStraightScore == -1)
                    largeStraightScore++;
                  largeStraightScore += ScoreLargeStraight(dice[0], dice[1], dice[2], dice[3], dice[4]);
                  break;
            case 'c':
                  yahtzeeScore += ScoreYahtzee(dice[0], dice[1], dice[2], dice[3], dice[4]);
                if (yahtzeeScore == -1)
                    yahtzeeScore++;
                  break;
            case 'd':
                  chanceScore += ScoreChance(dice[0], dice[1], dice[2], dice[3], dice[4]);
                if (chanceScore == -1)
                    chanceScore++;
                  break;
            default:
                  // gotos are dirty and gross but I'm tired
                  goto scorePlayer;
                  break;
        }

        cout << "Final Score Card" << endl;
        PrintScoreCard(dice[0], dice[1], dice[2], dice[3], dice[4], onesScore,
                twosScore, threesScore, foursScore, fivesScore, sixesScore,
                threeOfAKindScore, fourOfAKindScore, smallStraightScore,
                largeStraightScore, fullHouseScore, yahtzeeScore, chanceScore);
    }


    return 0;
}
