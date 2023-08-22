#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a = 20;
    int b = 10;

    //Addition
    cout << a + b << "\n";

    //Substraction
    cout << a - b << "\n";

    //Multiplication
    cout << a * b << "\n";

    //Division
    cout << a / b << "\n";

    //Modulus
    cout << a % b << "\n";

    //Increment-Decrement
    cout << a++ << "-" << a-- << "\n";

    //Add-Assign
    a += b;
    cout << a << "\n";
    return 0;
}