#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cout << "Binary to Decimal convetor and Decimal to Binary"<<endl;

    string convert_from;
    string convert_to;

    cout << "convert from: ";
    cin >> convert_from;
    cout << "convert to: ";
    cin >> convert_to;

    if (convert_from == "binary" && convert_to == "decimal") {
        long number;
        short base = 10;
        long quot, rem, value;
        long i = 0;
        long add = 0;
        cout << "number: ";
        cin >> number;
        while (number >= 1){
            quot = number / base;
            rem = number % base;
            add += rem * pow(2, i);
            if (number == 1){
                value = add;
                cout << value;
            }
            number = quot;
            i += 1;
        }
    }
    else if (convert_from=="decimal" && convert_to=="binary") {
        int number;
        int base = 2;
        int quot;
        cout << "number: ";
        cin >> number;
        for (quot=0; number>=1; number=quot) {
            quot = number/base;
            int rem = number % base;
            cout << rem;
        }
    }
    else {
        cout << "enter either binary || decimal";
    }


    return 0;
}