#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void start() {
    
    int num1;
    int num2;
    int sumadd;
    int sumsub;
    int summul;
    int sumdiv;
    int sumpow;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    sumadd = num1 + num2;
    sumsub = num1 - num2;
    summul = num1 * num2;
    sumdiv = num1 / num2;
    sumpow = pow(num1, num2);
    cout << "Sum (added) = " << sumadd;
    cout << "\nSum (subtracted) = " << sumsub;
    cout << "\nSum (multiplied) = " << summul;
    cout << "\nSum (Divided) = " << sumdiv;
    cout << "\nSum (Exponent) = " << sumpow;
    cout << "\n" << endl;
    start();
} 
int main()
{
    cout << "This is a calculator that takes your 2 numbers and does the 4 basic operations." << endl;
    cout << "" << endl;
    start();
}
