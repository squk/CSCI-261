/* CSCI 261 Lab01D Variable Practice
 *
 * Author: Christian Nieves
 *
 * Add more complete description here...
 */

#include <iostream>
using namespace std;

const double PI = 3.14159;

int main() {
    double radius = 0.0;
    double area = 0.0;

    cout << "Enter the radius of your circle : ";
    cin >> radius;

    area = PI * radius * radius;

    cout << "The area of a circle with radius " << radius << " is " << area << endl;
    return 0;
}
