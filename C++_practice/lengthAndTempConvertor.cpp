#include <iostream>
#include  <math.h>
using namespace std;

int main(){
    cout << "Length Convetor AND Temperature Convertor" << endl;

    string from, to, whichConvertor;
    float value;
    short factor = 10;

    cout << "Convertor Name: ";
    cin >> whichConvertor;
    cout << "from: ";
    cin >> from;
    cout << "Value: ";
    cin >> value;
    cout << "to: ";
    cin >> to;

    // deci centi milli micro nano pico angstrom femto
    // deca hecto kilo mega giga tera peta  
    // K C F

    if (whichConvertor == "length") {
        if ((from == "decimeter" || from == "dm") && (to == "meter" || to == "m")) {
            value = value * pow(factor, -1);
        }
        else if ((from == "centimeter" || from == "cm") && (to == "meter" || to == "m")) {
            value = value * pow(factor, -2);
        }
        else if ((from == "millimeter" || from == "mm") && (to == "meter" || to == "m")) {
            value = value * pow(factor, -3);
        }
        else if ((from == "micrometer" || from == "mu") && (to == "meter" || to == "m")) {
            value = value * pow(factor, -6);
        }
        else if ((from == "nanometer" || from == "nm") && (to == "meter" || to == "m")) {
            value = value * pow(factor, -9);
        }
        else if ((from == "picometer" || from == "pm") && (to == "meter" || to == "m")) {
            value = value * pow(factor, -12);
        }
        else if ((from == "angstrom" || from == "A") && (to == "meter" || to == "m")) {
            value = value * pow(factor, -10);
        }
        else if ((from == "femtometer" || from == "fm") && (to == "meter" || to == "m")) {
            value = value * pow(factor, -15);
        }
        else if ((from == "decameter" || from == "Dm") && (to == "meter" || to == "m")) {
            value = value * pow(factor, 1);
        }
        else if ((from == "hectometer" || from == "Hm") && (to == "meter" || to == "m")) {
            value = value * pow(factor, 2);
        }
        else if ((from == "kilometer" || from == "Km") && (to == "meter" || to == "m")) {
            value = value * pow(factor, 3);
        }
        else if ((from == "megameter" || from == "Mm") && (to == "meter" || to == "m")) {
            value = value * pow(factor, 6);
        }
        else if ((from == "gigameter" || from == "Gm") && (to == "meter" || to == "m")) {
            value = value * pow(factor, 9);
        }
        else if ((from == "terameter" || from == "Tm") && (to == "meter" || to == "m")) {
            value = value * pow(factor, 12);
        }
        else if ((from == "petameter" || from == "Pm") && (to == "meter" || to == "m")) {
            value = value * pow(factor, 15);
        }
        else {
            cout << "Not a correct keyword" << endl;
        }
    }
    else if (whichConvertor == "temp" || whichConvertor == "temperature") {
        if ((from == "kelvin" || from == "K") && (to == "degreeCelcius" || to == "C")) {
            value = value - 273.15;
        }
        else if ((from == "degreeCelcius" || from == "C") && (to == "kelvin" || to == "K")) {
            value = value + 273.15;
        }
        else if ((from == "degreeCelcius" || from == "C") && (to == "fahrenheit" || to == "F")) {
            value = ((9 * value) / 5) + 32;
        }
        else if ((from == "fahrenheit" || from == "F") && (to == "degreeCelcius" || to == "C")) {
            value = ((value - 32) * 5) / 9;
        }
        else if ((from == "kelvin" || from == "K") && (to == "fahrenheit" || to == "F")) {
            value = value - 273.15; 
            value = ((9 * value) / 5) + 32;
        }
        else if ((from == "fahrenheit" || from == "F") && (to == "kelvin" || to == "K")) {
            value = ((value - 32) * 5) / 9;
            value = value + 273.15;
        }
        else {
            cout << "Not a correct keyword" << endl;
        }
    }
    else {
        cout << "type length or temp";
    }
    cout << value;
    return 0;
}