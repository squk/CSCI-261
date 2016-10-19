/*
 * Lab02A, Formulas
 * Author : Victoria Girkins and Christian Nieves
 */

#include <iostream>
#include <cmath>
using namespace std;

void calcEscapeVelocity() {
    float escVelocity;
    const float G_CONST = 6.67e-11;
    float massPlanet, radiusPlanet;

    cout << "Enter the mass of your planet : ";
    cin >> massPlanet;

    cout << "Enter the radius of your planet: ";
    cin >> radiusPlanet;

    escVelocity = sqrt((2 * G_CONST * massPlanet) / radiusPlanet);
    cout << "To escape your planet, jump with a speed of " << escVelocity << "m/s" << endl;
}

void calcIdealGasLaw() {
    float volume, pressure, numMols, tempK;
    const float GAS_CONSTANT = 8.31e3;

    cout << "Enter pressure (in Pascal units) : ";
    cin >> pressure;

    cout << "Enter number of moles: ";
    cin >> numMols;

    cout << "Enter temperature in Kelvin: ";
    cin >> tempK;

    volume = (numMols * GAS_CONSTANT * tempK) / pressure;
    cout << "Calculated volume: " << volume << "L" << endl;
}

int main() {
    calcIdealGasLaw();
    calcEscapeVelocity();
    return 0;
}


