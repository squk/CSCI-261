/* CSCI 261 In Class Activity: Fix Loop Errors
*
* Author: Christian Nieves
*
*    This program illustrates a variety of common loop errors.
*    Fix the errors in each section.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to Loop World" << endl;

// SECTION I: update comment below on how you fixed this section's code, and tests run
// FIX = The cout said the loop should be inclusive so the condition had to be
// changed from < to <=
// TESTS:

    cout << endl;
    cout << "******************" << endl;
    cout << "Section I" << endl;
    cout << "******************" << endl;

    short sum;  // Accumulates the total
    short i;    // Used as loop control variable
    for (i = 1; i <= 5; ++i) {
         sum += i;
     }
    cout << "The sum of the numbers from 1 to 5 (inclusive) is: " << sum << endl;

// SECTION II: update comment below on how you fixed this section's code, and tests run
// FIX = total was being set to 0 during each loop
// TESTS: num_items = 3, prices = [1, 2, 3]. total = 6

    cout << endl;
	cout << "******************" << endl;
	cout << "Section II" << endl;
	cout << "******************" << endl;

    double total;     // Accumulates total
    double price;    // Gets next price from user
    short num_items;     // Number of items
    short counter = 1;  // Loop control counter

    cout << "How many items do you have? ";
    cin >> num_items;
    cout << endl;

    while (counter <= num_items) {
        cout << "Enter the price of item " << counter << ": ";
        cin >> price;
        cout << endl;
        total += price;
        counter++;
    }
    cout << "The total price is: " << total << endl;

// SECTION III: update comment below on how you fixed this section's code, and tests run
// FIX = increment counter by 1 for every loop(because it was constantly 1), change while condition to check
// counter against 4(inclusive)
// TESTS:

    cout << endl;
	cout << "******************" << endl;
	cout << "Section III" << endl;
	cout << "******************" << endl;

    cout << "I will now calculate ";
    cout << "the sum of numbers from 1 to 4 (inclusive)" << endl;

    sum=0;
    counter = 1;

    do {
        sum += counter;
        counter++;
        cout << "Sum so far: " << sum << endl;
    } while (counter <= 4);

    cout << endl << "Section III Recap" << endl;

    cout << "I calculated the sum of numbers from 1 to 4 (inclusive) as " << sum << endl;


// SECTION IV: update comment below on how you fixed this section's code, and tests run
// FIX = assign i to 1 instead of 4 and change condition from i>0 to i<=4.
// Previous condition ran infinitely because i will always be greater than 0
// when incremented and initialized at 4
// TESTS:
//

    cout << endl;
	cout << "******************" << endl;
	cout << "Section IV" << endl;
	cout << "******************" << endl;

    cout << "I will now calculate ";
    cout << "the sum of squares from 1 to 4 (inclusive)" << endl;

    sum = 0;
    for (i=1; i <= 4; i++) {
        sum += i*i;
    }

    cout << "The sum of squares from 1 to 4 is: " << sum << endl;

// SECTION V: update comment below on how you fixed this section's code, and tests run
// FIX = changed coundition to <= 4 and incremented counter within the while loop
// TESTS:

    cout << endl;
	cout << "******************" << endl;
	cout << "Section V" << endl;
	cout << "******************" << endl;

    cout << "I will now calculate ";
    cout << "the sum of cubes from 1 to 4 (inclusive)" << endl;

    sum = 0;
    counter = 1;

    while (counter <= 4 ) {
        sum += (counter * counter * counter);
        counter++;
    }

    counter++;

    cout << "The sum of cubes from 1 to 4 is: " << sum << endl;

    cout << endl;
	cout << "******************" << endl;
	cout << "Section Done" << endl;
	cout << "******************" << endl;

	cout << endl << "Congrats!  You fixed them all (hopefully correctly!)" << endl << endl << "Goodbye" << endl << endl;

    return 0;
}
