#include <iostream>

//Const define
#define PI 3.1416;

using namespace std;

int main() {
    
    //Int
    int intValue = 20;
    cout << "This is an int data: " << intValue;
    
    //Float
    float floatValue = 1.5227;
    cout << "\n";
    cout << "This is a float data: " << floatValue;

    //Double
    double doubleValue = 1.5227;
    cout << "\n";
    cout << "This is a double data: " << doubleValue;


    //Char
    char charValue = 'A';
    cout << "\n";
    cout << "This is a char data: " << charValue;

    //Boolean
    bool boolValue = true;
    cout << "\n";
    cout << "This is a boolean data: " << boolValue;

    //Const in the space
    const float CONST_DATA = 1.2;
    cout << "\n";
    cout << "Constant PI (out of the space): " << PI;
    cout << "\nConstant CONST_DATA (in the space): " << CONST_DATA;
    cout << "\n";

    return 0;
}