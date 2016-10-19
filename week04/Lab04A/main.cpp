/* CSCI 261 Lab04A
 *
 * Author: Chrisitan Nieves
 *
 */

#include <cmath>    // For math functions
#include <iostream> // For cin, cout, etc.
#include <iomanip>
#include <string>   // For string class

using namespace std;

const double TOLERANCE = 0.0001;

int main() {

    int option;
    double a, b, c, perimeter, area;
    string triangleType = "";
    bool isTriangle = false;

    cout << setprecision(2) << fixed;

    while (!isTriangle) {
        cout << "Enter A, B, and C: ";
        cin >> a >> b >> c;
        if (a <= 0 || b <= 0 || c <= 0)
            continue;

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
        if (((a + b) > c && (a + c) > b && (b + c) > a)) {
            cout << endl << "Woohoo - input is valid" << endl;
            isTriangle = true;

            if (fabs(a*a + b*b - c*c) <= TOLERANCE)
                triangleType = "Right";
            else if ((a*a + b*b) > c*c)
                triangleType = "Acute";
            else
                triangleType = "Obtuse";

            // calculate perimeter
            perimeter = (a+b+c);

            // calculate area
            double p = perimeter / 2;
            area = sqrt(p * (p - a) * (p - b) * (p - c));

            cout << setw(16) << left << "Triangle Sides:";
            cout << setw(6) << right << a << endl;
            cout << setw(16) << " " << setw(6) << right << b << endl;
            cout << setw(16) << " " << setw(6) << right << c << endl;

            cout << setw(16) << left << "Perimeter:";
            cout << setw(6) << right << perimeter << endl;

            cout << setw(16) << left << "Area:";
            cout << setw(6) << right << area << endl;

            cout << setw(16) << left << "Classification:";
            cout << setw(6) << right << triangleType << endl;
        }
        else {
            cout << "Invalid trianlge sides entered" << endl;
            continue;
        }
    }

    return EXIT_SUCCESS;
}

