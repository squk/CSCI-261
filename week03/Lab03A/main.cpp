/*
 * Lab03A
 * Author : Christian Nieves
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    const double TOLERANCE = 0.0001;
    double a, b, c;
    string triangleType;

    cout << "Enter 3 side lengths for a triangle (e.g. 3 4 5):";
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

    if (!((a + b) > c && (a + c) > b && (b + c) > a))
        triangleType = "Invalid";
    else if (fabs(a*a + b*b - c*c) <= TOLERANCE)
        triangleType = "Right";
    else if ((a*a + b*b) > c*c)
        triangleType = "Acute";
    else
        triangleType = "Obtuse";

    cout << triangleType << endl;

    return 0;
}
