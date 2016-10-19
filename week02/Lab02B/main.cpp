/*
 * Lab02B
 * Author : Christian Nieves
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int seed = 1;
    int randomNum = 0;

    cout << "Enter a seed for the RNG : ";
    cin >> seed;

    srand(seed);
    randomNum = rand() % 100;

    cout << "The random number is : " << randomNum << endl;
    string quartile = "first";
    if (randomNum > 24 && randomNum < 50)
        quartile = "second";
    else if (randomNum >= 50 && randomNum < 75)
        quartile = "third";
    else if (randomNum >= 75)
        quartile = "fourth";

    cout << "This is in the " << quartile << " quartile." << endl;

    return 0;
}
