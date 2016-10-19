/* DO NOT MODIFY THIS FILE!!!  DO NOT MODIFY THIS FILE!!!
 *
 * CSCI 261 Lab05C: Yahtzee Function Files
 *
 * Author: Dr. Paone
 *
 * This program performs unit testing on all of our Yahtzee Functions
 *
 * DO NOT MODIFY THIS FILE!!!  DO NOT MODIFY THIS FILE!!!
 */

#include "YahtzeeFunctions.h"	// contains the prototypes for our 28 Yahtzee Functions.

#include <iomanip>				// for setprecision()
#include <iostream>				// for cout, cin, endl, etc.
#include <string>				// for string!
using namespace std;

// global variables to keep track of how many tests passed and failed.
// we made these global to save us from having to pass them by reference every single
// time to our TEST function.  since they are global they can be accessed
// inside the TEST() function and our main() function.
int numPassed = 0, numFailed = 0;

// performs our unit test
// input:
//		bool result    : the result of our function call test
//		bool target    : our expected result we hope the function returns
//		string testMsg : message to display describing this test
// output:
//		nothing
void TEST( bool result, bool target, string testMsg ) {
	// determine if our test passed or failed
	bool testPass = result == target;

	// print out the test information with result
	// the ( bool ? a : b ) notation is a conditional expression which was from the optional zyBooks 2.16
	// it is a shorthand notation for a simple if - else where if bool evaluates to true, execute a.  If
	// it's false execute b.  This notation is useful for brief inline notation such as printing out
	// two values.  We don't need to disrupt our cout statement with a series of if/else and add
	// six more lines of code to accomplish what can be done in one.
	cout << "Testing: [ " << setw(20) << left << testMsg << "]: " << (result == target ? "SUCCESS" : "FAIL" ) << endl;

	// increment our test counters based on if the test passed or failed
	// continuing the conditional expression discussion, we could rewrite this five lines
	// as testPass ? numPassed++ : numFailed++;
	// but here it makes more sense to keep it as an if/else in case later on we want to
	// add what happens.
	if( testPass ) {
		numPassed++;
	} else {
		numFailed++;
	}
}

// our main function - runs the program!
// input:
//		none
// output:
//		int	: return code indiciting successful execution or potential error code for the OS to handle
int main() {

	int die1 = 3, die2 = 4, die3 = 2, die4 = 5, die5 = 1;	// variables to store our five die values for swapping and sorting

	cout << "////////////////////////////" << endl;			// perform our swapping tests
	cout << "//  Swapping" << endl << endl;

	SwapDice( die1, die3 );
	TEST( die1 == 2, true, "SwapDice 1-3 1 is 2" );
	TEST( die3 == 3, true, "SwapDice 1-3 3 is 3" );

	cout << "////////////////////////////" << endl;			// perform our sorting tests
	cout << "//  Sorting" << endl << endl;

	SortDice( die1, die2, die3, die4, die5 );
	TEST( die1 == 1, true, "SortDice 1" );
	TEST( die2 == 2, true, "SortDice 2" );
	TEST( die3 == 3, true, "SortDice 3" );
	TEST( die4 == 4, true, "SortDice 4" );
	TEST( die5 == 5, true, "SortDice 5" );

	die3 = 6;

	SortDice( die1, die2, die3, die4, die5 );
	TEST( die1 == 1, true, "SortDice 1" );
	TEST( die2 == 2, true, "SortDice 2" );
	TEST( die3 == 4, true, "SortDice 4" );
	TEST( die4 == 5, true, "SortDice 5" );
	TEST( die5 == 6, true, "SortDice 6" );

	die3 = 6;

	SortDice( die1, die2, die3, die4, die5 );
	TEST( die1 == 1, true, "SortDice 1" );
	TEST( die2 == 2, true, "SortDice 2" );
	TEST( die3 == 5, true, "SortDice 5" );
	TEST( die4 == 6, true, "SortDice 6" );
	TEST( die5 == 6, true, "SortDice 6" );

	cout << endl << "////////////////////////////" << endl;	// perform our is present tests
	cout << "//  Present" << endl << endl;

	TEST( IsOnes( 1, 1, 1, 1, 1), true, "Ones 1 1 1 1 1" );
	TEST( IsOnes( 2, 2, 2, 2, 2), false, "Ones 2 2 2 2 2" );
	TEST( IsTwos( 1, 1, 2, 1, 1), true, "Twos 1 1 2 1 1" );
	TEST( IsTwos( 1, 1, 1, 1, 1), false, "Twos 1 1 1 1 1" );
	TEST( IsThrees( 1, 3, 1, 3, 1), true, "Threes 1 3 1 3 1" );
	TEST( IsThrees( 1, 1, 1, 1, 1), false, "Threes 1 1 1 1 1" );
	TEST( IsFours( 1, 1, 1, 1, 4), true, "Fours 1 1 1 1 4" );
	TEST( IsFours( 1, 1, 1, 1, 1), false, "Fours 1 1 1 1 1" );
	TEST( IsFives( 1, 5, 1, 1, 5), true, "Fives 1 5 1 1 5" );
	TEST( IsFives( 5, 5, 5, 5, 5), true, "Fives 5 5 5 5 5" );
	TEST( IsFives( 1, 1, 1, 1, 1), false, "Fives 1 1 1 1 1" );
	TEST( IsSixes( 1, 1, 6, 1, 1), true, "Sixes 1 1 6 1 1" );
	TEST( IsSixes( 1, 1, 1, 1, 1), false, "Sixes 1 1 1 1 1" );

	TEST( IsThreeOfAKind( 3, 3, 3, 3, 3), true, "3 Kind 3 3 3 3 3" );
	TEST( IsThreeOfAKind( 3, 3, 2, 3, 3), true, "3 Kind 3 3 2 3 3" );
	TEST( IsThreeOfAKind( 3, 3, 4, 2, 3), true, "3 Kind 3 3 4 2 3" );
	TEST( IsThreeOfAKind( 1, 4, 4, 5, 1), false, "3 Kind 1 4 4 5 1" );

	TEST( IsFourOfAKind( 3, 3, 3, 3, 3), true, "4 Kind 3 3 3 3 3" );
	TEST( IsFourOfAKind( 3, 3, 3, 3, 4), true, "4 Kind 3 3 3 3 4" );
	TEST( IsFourOfAKind( 3, 4, 3, 3, 3), true, "4 Kind 3 4 3 3 3" );
	TEST( IsFourOfAKind( 1, 6, 1, 6, 1), false, "4 Kind 1 6 1 6 1" );
	TEST( IsFourOfAKind( 1, 1, 4, 3, 2), false, "4 Kind 1 1 4 3 2" );

	TEST( IsFullHouse( 3, 3, 4, 4, 3), true, "F House 3 3 4 4 3" );
	TEST( IsFullHouse( 1, 1, 4, 3, 2), false, "F House 1 1 4 3 2" );
	TEST( IsFullHouse( 3, 3, 3, 3, 3), false, "F House 3 3 3 3 3" );
	TEST( IsFullHouse( 3, 3, 4, 4, 4), true, "F House 3 3 4 4 3" );

	TEST( IsSmallStraight( 1, 2, 3, 4, 6), true, "S Str8 1 2 3 4 6" );
	TEST( IsSmallStraight( 2, 2, 3, 4, 5), true, "S Str8 2 2 3 4 5" );
	TEST( IsSmallStraight( 1, 2, 3, 4, 5), true, "S Str8 1 2 3 4 5" );
	TEST( IsSmallStraight( 2, 3, 4, 5, 6), true, "S Str8 2 3 4 5 6" );
	TEST( IsSmallStraight( 2, 3, 6, 5, 1), false, "S Str8 2 3 6 5 1" );
	TEST( IsSmallStraight( 1, 1, 2, 3, 4), true, "S Str8 1 1 2 3 4" );
	TEST( IsSmallStraight( 1, 2, 2, 3, 4), true, "S Str8 1 2 2 3 4" );
	TEST( IsSmallStraight( 1, 2, 3, 3, 4), true, "S Str8 1 2 3 3 4" );
	TEST( IsSmallStraight( 1, 2, 3, 4, 4), true, "S Str8 1 2 3 4 4" );
	TEST( IsSmallStraight( 1, 3, 4, 5, 6), true, "S Str8 1 3 4 5 6" );

	TEST( IsLargeStraight( 1, 2, 3, 4, 5), true, "L Str8 1 2 3 4 5" );
	TEST( IsLargeStraight( 2, 3, 4, 5, 6), true, "L Str8 2 3 4 5 6" );
	TEST( IsLargeStraight( 2, 3, 6, 5, 1), false, "L Str8 2 3 6 5 1" );
	TEST( IsLargeStraight( 2, 4, 3, 5, 6), true, "L Str8 2 4 3 5 6" );

	TEST( IsYahtzee( 3, 3, 3, 3, 3), true, "Yahtzee 3 3 3 3 3" );
	TEST( IsYahtzee( 1, 1, 4, 3, 2), false, "Yahtzee 1 1 4 3 2" );

	TEST( IsChance( 1, 2, 3, 6, 1), true, "Chance 1 2 3 6 1" );

	cout << endl << "////////////////////////////" << endl;	// perform our scoring tests
	cout << "//  Scoring" << endl << endl;

	TEST( ScoreOnes( 1, 1, 1, 1, 1) == 5, true, "Ones 1 1 1 1 1" );
	TEST( ScoreTwos( 1, 1, 1, 1, 1) == 0, true, "Twos 1 1 1 1 1" );
	TEST( ScoreTwos( 2, 2, 1, 1, 1) == 4, true, "Twos 2 2 1 1 1" );
	TEST( ScoreThrees( 2, 3, 3, 1, 3) == 9, true, "Threes 2 3 3 1 3" );
	TEST( ScoreFours( 1, 4, 4, 4, 4) == 16, true, "Fours 1 4 4 4 4" );
	TEST( ScoreFives( 1, 5, 1, 1, 1) == 5, true, "Fives 1 5 1 1 1" );
	TEST( ScoreSixes( 6, 1, 1, 1, 6) == 12, true, "Sixes 6 1 1 1 6" );

	TEST( ScoreThreeOfAKind( 1, 1, 1, 1, 1) == 5, true, "3 Kind 1 1 1 1 1" );
	TEST( ScoreThreeOfAKind( 1, 1, 2, 1, 1) == 6, true, "3 Kind 1 1 2 1 1" );
	TEST( ScoreThreeOfAKind( 1, 1, 3, 2, 1) == 8, true, "3 Kind 1 1 3 2 1" );
	TEST( ScoreThreeOfAKind( 1, 4, 4, 5, 1) == 0, true, "3 Kind 1 4 4 5 1" );

	TEST( ScoreFourOfAKind( 1, 1, 1, 1, 1) == 5, true, "4 Kind 1 1 1 1 1" );
	TEST( ScoreFourOfAKind( 1, 1, 1, 1, 3) == 7, true, "4 Kind 1 1 1 1 3" );
	TEST( ScoreFourOfAKind( 1, 4, 1, 1, 1) == 8, true, "4 Kind 1 4 1 1 1" );
	TEST( ScoreFourOfAKind( 1, 6, 1, 6, 1) == 0, true, "4 Kind 1 6 1 6 1" );
	TEST( ScoreFourOfAKind( 1, 1, 4, 3, 2) == 0, true, "4 Kind 1 1 4 3 2" );

	TEST( ScoreFullHouse( 1, 1, 3, 3, 1) == 25, true, "F House 1 1 3 3 1" );
	TEST( ScoreFullHouse( 1, 1, 4, 3, 2) == 0, true, "F House 1 1 4 3 2" );
	TEST( ScoreFullHouse( 1, 1, 1, 1, 1) == 0, true, "F House 1 1 1 1 1" );

	TEST( ScoreSmallStraight( 1, 2, 3, 4, 6) == 30, true, "S Str8 1 2 3 4 6" );
	TEST( ScoreSmallStraight( 2, 2, 3, 4, 5) == 30, true, "S Str8 2 2 3 4 5" );
	TEST( ScoreSmallStraight( 1, 2, 3, 4, 5) == 30, true, "S Str8 1 2 3 4 5" );
	TEST( ScoreSmallStraight( 2, 3, 4, 5, 6) == 30, true, "S Str8 2 3 4 5 6" );
	TEST( ScoreSmallStraight( 2, 3, 6, 5, 1) == 0, true, "S Str8 2 3 6 5 1" );
	TEST( ScoreSmallStraight( 1, 1, 2, 3, 4) == 30, true, "S Str8 1 1 2 3 4" );
	TEST( ScoreSmallStraight( 1, 2, 2, 3, 4) == 30, true, "S Str8 1 2 2 3 4" );
	TEST( ScoreSmallStraight( 1, 2, 3, 3, 4) == 30, true, "S Str8 1 2 3 3 4" );
	TEST( ScoreSmallStraight( 1, 2, 3, 4, 4) == 30, true, "S Str8 1 2 3 4 4" );
	TEST( ScoreSmallStraight( 1, 3, 4, 5, 6) == 30, true, "S Str8 1 3 4 5 6" );

	TEST( ScoreLargeStraight( 1, 2, 3, 4, 5) == 40, true, "L Str8 1 2 3 4 5" );
	TEST( ScoreLargeStraight( 2, 3, 4, 5, 6) == 40, true, "L Str8 2 3 4 5 6" );
	TEST( ScoreLargeStraight( 2, 3, 6, 5, 1) == 0, true, "L Str8 2 3 6 5 1" );

	TEST( ScoreYahtzee( 1, 1, 1, 1, 1) == 50, true, "Yahtzee 1 1 1 1 1" );
	TEST( ScoreYahtzee( 1, 1, 4, 3, 2) == 0, true, "Yahtzee 1 1 4 3 2" );

	TEST( ScoreChance( 2, 3, 3, 6, 4) == 18, true, "Chance 2 3 3 6 4" );

	cout << endl;

	// print out how many tests passed
	cout << numPassed << " / " << (numPassed + numFailed) << " (" << fixed << setprecision(2) << ((double)numPassed / ((double)numPassed + (double)numFailed))*100.0 << "%) Tests Passed" << endl;

	return 0;												// signals the operating system that our program ended OK

}
