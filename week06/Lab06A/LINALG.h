/*
 * Author: Christian Nieves
 * Assignment: Lab06A
 */

#pragma once
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x, y;
    void print() {
        cout << "(" << x << ", " << y << ")";
    }
};

struct Vector {
    double x, y;
    void print() {
        cout << "<" << x << ", " << y << ">";
    }
};

static inline Point MovePoint(Point p, Vector v) {
    return Point { p.x + v.x, p.y + v.y };
}

static inline Vector RotateVector(Vector v, double angle) {
    Vector rotated {
        v.x * cos(angle) - v.y * sin(angle),
        v.x * sin(angle) + v.y * cos(angle)
    };

    return rotated;
}
