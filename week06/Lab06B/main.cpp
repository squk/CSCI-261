/*
 * Author: Christian Nieves
 * Assignment: Lab06A
 */

#include "LINALG.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const double PI = 3.14159;
const double EPSILON = 0.00001;

struct Turtle {
    Point pos;
    Vector head;
};

void MoveTurtleForward(Turtle &t, double distance) {
    t.pos = MovePoint(t.pos, t.head * distance);
    t.pos.x = (abs(t.pos.x) < EPSILON) ? 0.0 : t.pos.x;
    t.pos.y = (abs(t.pos.y) < EPSILON) ? 0.0 : t.pos.y;
}

void TurnTurtleLeft(Turtle &t, double angle) {
    t.head = RotateVector(t.head, angle);
}

void ApproximateCircle(Turtle &t, double angle, double distance, int stepsLeft) {
    if (stepsLeft != 0) {
        TurnTurtleLeft(t, angle);
        MoveTurtleForward(t, distance);
        t.pos.print();
        cout << endl;
        ApproximateCircle(t, angle, distance, stepsLeft-1);
    }
}

int main() {
    //set up IO
    cout << fixed << showpoint;
    cout << setprecision(3);
    int resolution = 0;
    while (resolution < 3) {
        cout << "Enter a resolution for the circle: ";
        cin >> resolution;
    }

    double angle = (2 * PI ) / resolution;
    double distance = sqrt(2 * (1 - cos(angle)));
    Point p { 1, 0 };
    Vector v { 1, 0 };
    Turtle t { p, v };

    ApproximateCircle(t, angle, distance, resolution);
}

