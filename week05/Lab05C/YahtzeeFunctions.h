/*
 * Author : Christian Nieves
 */

#pragma once
// for debuggin test cases
#include <iostream>

bool IsChance(int die1, int die2, int die3, int die4, int die5);
int ScoreChance(int die1, int die2, int die3, int die4, int die5);
bool IsOnes(int die1, int die2, int die3, int die4, int die5);
int ScoreOnes(int die1, int die2, int die3, int die4, int die5);
bool IsTwos(int die1, int die2, int die3, int die4, int die5);
int ScoreTwos(int die1, int die2, int die3, int die4, int die5);
bool IsThrees(int die1, int die2, int die3, int die4, int die5);
int ScoreThrees(int die1, int die2, int die3, int die4, int die5);
bool IsFours(int die1, int die2, int die3, int die4, int die5);
int ScoreFours(int die1, int die2, int die3, int die4, int die5);
bool IsFives(int die1, int die2, int die3, int die4, int die5);
int ScoreFives(int die1, int die2, int die3, int die4, int die5);
bool IsSixes(int die1, int die2, int die3, int die4, int die5);
int ScoreSixes(int die1, int die2, int die3, int die4, int die5);
bool IsThreeOfAKind(int die1, int die2, int die3, int die4, int die5);
int ScoreThreeOfAKind(int die1, int die2, int die3, int die4, int die5);
bool IsFourOfAKind(int die1, int die2, int die3, int die4, int die5);
int ScoreFourOfAKind(int die1, int die2, int die3, int die4, int die5);
bool IsFullHouse(int die1, int die2, int die3, int die4, int die5);
int ScoreFullHouse(int die1, int die2, int die3, int die4, int die5);
bool IsSmallStraight(int die1, int die2, int die3, int die4, int die5);
int ScoreSmallStraight(int die1, int die2, int die3, int die4, int die5);
bool IsLargeStraight(int die1, int die2, int die3, int die4, int die5);
int ScoreLargeStraight(int die1, int die2, int die3, int die4, int die5);
bool IsYahtzee(int die1, int die2, int die3, int die4, int die5);
int ScoreYahtzee(int die1, int die2, int die3, int die4, int die5);
void SwapDice(int &die1, int &die2);
void SortDice(int &die1, int &die2, int &die3, int &die4, int &die5);
