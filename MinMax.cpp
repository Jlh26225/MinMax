// Write a program that asks the user to enter two different integers.The program should use the conditional operator to determine which number is the smaller and which is the larger.

#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    // Ask the user to enter two different integers
    cout << "Enter an integer: ";
    cin >> num1;

    cout << "Enter a different integer: ";
    cin >> num2;

    // Use the conditional operator to determine the smaller and larger numbers
    int smaller = (num1 < num2) ? num1 : num2;
    int larger = (num1 > num2) ? num1 : num2;

    // Output the results
    cout << "The smaller number is: " << smaller << endl;
    cout << "The larger number is: " << larger << endl;

    return 0;
}