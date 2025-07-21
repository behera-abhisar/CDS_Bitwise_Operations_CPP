// Bitwise operations in CPP
// Abhisar Behera
// 24070123002
// Experiment 04(A)

#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    int AND = a & b;
    int OR = a | b;
    int XOR = a ^ b;
    int NOT_a = ~a;
    int NOT_b = ~b;
    int LS_a = a << 1;
    int RS_a = a >> 1;
    int LS_b = b << 1;
    int RS_b = b >> 1;

    cout << "a: " << a << endl
         << "b: " << b << endl;
    cout << "AND: " << AND << endl;
    cout << "OR: " << OR << endl;
    cout << "XOR: " << XOR << endl;
    cout << "NOT a: " << NOT_a << endl;
    cout << "NOT b: " << NOT_b << endl;
    cout << "Left Shift a: " << LS_a << endl;
    cout << "Right Shift a: " << RS_a << endl;
    cout << "Left Shift b: " << LS_b << endl;
    cout << "Right Shift b: " << RS_b << endl;

    return 0;
}

/* Output

a: 5
b: 10
AND: 0
OR: 1
XOR: 15
NOT a: -6
NOT b: -11
Left Shift a: 10
Right Shift a: 2
Left Shift b: 20
Right Shift b: 5

*/
