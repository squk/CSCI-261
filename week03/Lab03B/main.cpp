/* CSCI 261 Lab03B: Triangle Classifier + Options Menu
 *
 * Author: Chrisitan Nieves
 *
 * The goal of this lab is to practice the use of if-else statements to classify triangles based on their sides.
 * It will also teach you how to correctly compare double values for equality using a tolerance factor and
 * the use of a menu of options using the switch statement.
 */

#include <cmath>    // For math functions
#include <iostream> // For cin, cout, etc.
#include <string>   // For string class

using namespace std;

const double TOLERANCE = 0.0001;

int main() {

    int option;               		// to store the user's option (1-5)
    double a, b, c, perimeter, area;
    string triangleType = "";
    bool isTriangle = false;

    do {
    	// show the menu
        cout << "\n1. Enter measurements\n";
        cout << "2. Print measurements\n";
        cout << "3. Check triangle feasibility\n";
        cout << "4. Classify triangle\n";
        cout << "5. Print triangle perimeter\n";
        cout << "6. Print triangle area\n";
        cout << "7. Print triangle summary\n";
        cout << "8. Exit\n";

        // read user's choice
        cout << "Please, choose an option: ";
        cin >> option;

        // ignore option if not 1-8
        if (option < 1 || option > 8) {
            cout << "Invalid option!\n";
            continue;
        }

        switch (option) {
            case 1:
                cout << "Enter A, B, and C: ";
                cin >> a >> b >> c;

                // sort a, b, and c in increasing order
                while (a > b || b > c) {
                    if (a > b) {
                        double temp = a;
                        a = b;
                        b = temp;
                    }

                    if (b > c) {
                        double temp = b;
                        b = c;
                        c = temp;
                    }
                }
                break;
            case 2:
                cout << "A:" << a << ", B:" << b << ", C:" << c << endl;
                break;
            case 3:
                if (((a + b) > c && (a + c) > b && (b + c) > a)) {
                    isTriangle = true;
                    cout << "Is a valid triangle" << endl;
                }
                else
                    cout << "Is NOT a valid triangle. " << endl;
                break;
            case 4:
                if (isTriangle) {
                    if (fabs(a*a + b*b - c*c) <= TOLERANCE)
                        triangleType = "Right";
                    else if ((a*a + b*b) > c*c)
                        triangleType = "Acute";
                    else
                        triangleType = "Obtuse";

                    cout << "Triangle is a " << triangleType << " triangle. " << endl;
                }
                else
                    cout << "Run option 3 before performing this operation. Measurements may be invalid." << endl;
                break;
            case 5:
                if (isTriangle) {
                    perimeter = (a+b+c);
                    cout << "Perimeter: " << perimeter << endl;
                }
                else
                    cout << "Run option 3 before performing this operation. Measurements may be invalid." << endl;
                break;
            case 6:
                if (isTriangle) {
                    //half the perimeter
                    double p = (a+b+c) / 2;
                    area = sqrt(p * (p - a) * (p - b) * (p - c));
                    cout << "Area: " << area << endl;
                }
                else
                    cout << "Run option 3 before performing this operation. Measurements may be invalid." << endl;
                break;
            case 7:
                if (isTriangle && perimeter && area && triangleType != "") {
                    cout << "Triangle Sides: " << a << ", " << b << ", " << c << endl;
                    cout << "Perimeter: " << perimeter << endl;
                    cout << "Area: " << area << endl;
                    cout << "Classification: " << triangleType << endl;
                }
                else
                    cout << "Make sure to correctly perform operations 1-7 in order to create this summary." << endl;
                break;
            case 8:
                cout << "goodbye!" << endl;
                break;
            default:
                cout << "Invalid operation specified." << endl;
                break;
        }

    } while( option != 8 );

    return EXIT_SUCCESS;
}

