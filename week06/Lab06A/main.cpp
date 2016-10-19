/*
 * Author: Christian Nieves
 * Assignment: Lab06A
 */

#include "LINALG.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void PrintPoint(Point p) {
    cout << "The point is ";
    p.print();
    cout << endl;
}

void PrintVector(Vector v) {
    cout << "The vector is ";
    v.print();
    cout << endl;
}

int main() {
    Point p { 0, 0 };
    Vector v { 0, 0 };

    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "Enter the Point's x-coordinate: ";
    cin >> p.x;
    cout << "Enter the Point's y-coordinate: ";
    cin >> p.y;
    PrintPoint(p);

    cout << "Enter the Vector's x-coordinate: ";
    cin >> v.x;
    cout << "Enter the Vector's y-coordinate: ";
    cin >> v.y;
    PrintVector(v);

    cout << "After adding the vector to the point :";
    p = MovePoint(p, v);
    PrintPoint(p);

    double angle = 0.0;
    cout << "Enter an angle of rotation: ";
    cin >> angle;
    v = RotateVector(v, angle);
    PrintVector(v);
}

