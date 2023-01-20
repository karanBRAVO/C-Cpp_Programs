#include <iostream>
using namespace std;

int main() {
    cout << "Calculator!"<<endl;

    float num1;
    float num2;
    string arthOperator;

    cout << "num1: ";
    cin >> num1;
    cout << "operator: ";
    cin >> arthOperator;
    cout << "num2: ";
    cin >> num2;

    if (arthOperator == "+") {
        cout << num1 + num2;
    }
    else if (arthOperator == "-") {
        cout << num1 - num2;
    }
    else if (arthOperator == "*") {
        cout << num1 * num2;
    }
    else if (arthOperator == "/") {
        cout << num1 / num2;
    }
    else {
        cout << "entered something wrong!";
    }

    return 0;
}