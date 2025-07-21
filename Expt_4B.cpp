// Set and reset binary
// Abhisar Behera
// 24070123002
// Experiment 04(B)

#include <iostream>

using namespace std;

int main() {
    int a;
    
    cout << "Enter a number: ";
    cin >> a;

    int pos;
    cout << "Enter the position to set: ";
    cin >> pos;

    int set_bit = a | (1 << (pos - 1));
    cout << "Set bit value: " << set_bit << endl;

    int reset_bit = a & ~(1 << (pos - 1));
    cout << "Reset bit value: " << reset_bit << endl;

    return 0;
}

/* Output

Enter a number: 5
Enter the position to set: 1
Set bit value: 5
Reset bit value: 4

*/
