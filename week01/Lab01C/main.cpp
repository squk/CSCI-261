/*
 *CSCI 261 Lab 01C: PRISM VOLUME
 *
 * Author: Christian Nieves
 *
 * Add more complete description here...
 */

#include <iostream>

using namespace std;

int main() {
    int length = 0;
    int width = 0;
    int height = 0;
    int volume;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> height;

    // Volume of a box is length times width times height.
    volume = length * width * height;

    cout << "Calculated Volume: " << volume << endl;

    return 0;
}

