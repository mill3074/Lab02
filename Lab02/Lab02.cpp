
#include <iostream>

using namespace std; 

int main()
{
    float A;
    float B;
    float X;

    cout << "Welcome to the Amazing Calculation Emitter (A.C.E)" << endl;

    cout << "Let's solve Ax + B = 0 for x" << endl;
    cout << " " << endl;

    cout << "Please enter a value for A: ";
    cin >> A;

    //I just added these for fun, you can disregard this
    if (A > 100000) {
        cout << "Nice Keyboard Slam." << endl;
        cout << " " << endl;
    }

    cout << "Please enter a value for B: ";
    cin >> B;
    cout << " " << endl;

    //I just added these for fun, you can disregard this
    if (B > 100000) {
        cout << "Nice Keyboard Slam." << endl;
        cout << " " << endl;
    }

    cout << "If " << A << "x + " << B << " = 0..." << endl;
    cout << " " << endl;

    X = -B/A;
    cout << "...then X= " << X << "!" << endl;
}


