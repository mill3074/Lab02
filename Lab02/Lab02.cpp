
#include <iostream>

using namespace std; 

int main()
{
    float A;
    float B;
    float X;

    cout << "Welcome to the Awesome Calculation Evaluator (A.C.E)" << endl;

    cout << "Solve Ax + B = 0 for x" << endl;
    cout << " " << endl;

    cout << "Please enter a value for A: ";
    cin >> A;

    //I just added these for fun, you can disregard this
    if (A > 1000000) {
        cout << "Nice Keyboard Slam." << endl;
        cout << " " << endl;
    }
    if (A < 0.9999999) {
        cout << "Nice Keyboard Slam." << endl;
        cout << " " << endl;
    }

    cout << A << "x + B = 0" << endl;
    cout << " " << endl;

    cout << "Please enter a value for B: ";
    cin >> B;

    //I just added these for fun, you can disregard this
    if (B > 1000000) {
        cout << "Nice Keyboard Slam." << endl;
        cout << " " << endl;
    }
    if (B < 0.9999999) {
        cout << "Nice Keyboard Slam." << endl;
        cout << " " << endl;
    }

    cout << A << "x + " << B << " = 0" << endl;
    cout << " " << endl;

    X = -B/A;
    cout << "Then X= " << X << endl;
}


