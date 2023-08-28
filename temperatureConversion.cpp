#include<iostream>
using namespace std;

int main() {
    char continueProgram = 'y';

    while (continueProgram == 'y' || continueProgram == 'Y') {
        float fahrenheit, celsius, Kelvin;
        char unit;

        cout << "In which unit you want to enter temperature:\n";
        cout << "For Celsius, type 'c' or 'C'.\n";
        cout << "For Fahrenheit, type 'f' or 'F'.\n";
        cout << "For Kelvin, type 'k' or 'K': ";
        cin >> unit;

        if (unit == 'c' || unit == 'C') {
            cout << "Enter Temperature in Celsius: ";
            cin >> celsius;
            fahrenheit = (celsius * 9.0) / 5.0 + 32;
            Kelvin = celsius + 273.15;
            cout << "The Temperature in Celsius: " << celsius << endl;
            cout << "The Temperature in Fahrenheit: " << fahrenheit << endl;
            cout << "The Temperature in Kelvin: " << Kelvin << endl;
        } else if (unit == 'f' || unit == 'F') {
            cout << "Enter Temperature in Fahrenheit: ";
            cin >> fahrenheit;
            celsius = (fahrenheit - 32) * 5.0 / 9.0;
            Kelvin = celsius + 273.15;
            cout << "The Temperature in Celsius: " << celsius << endl;
            cout << "The Temperature in Fahrenheit: " << fahrenheit << endl;
            cout << "The Temperature in Kelvin: " << Kelvin << endl;
        } else if (unit == 'k' || unit == 'K') {
            cout << "Enter Temperature in Kelvin: ";
            cin >> Kelvin;
            celsius = Kelvin - 273.15;
            fahrenheit = (celsius * 9.0) / 5.0 + 32;
            cout << "The Temperature in Celsius: " << celsius << endl;
            cout << "The Temperature in Fahrenheit: " << fahrenheit << endl;
            cout << "The Temperature in Kelvin: " << Kelvin << endl;
        } else {
            cout << "Wrong Input, Try again." << endl;
            cout << "Do you want to continue? (y/n): ";
            cin >> continueProgram;
            continue;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> continueProgram;
    }


    return 0;
}

