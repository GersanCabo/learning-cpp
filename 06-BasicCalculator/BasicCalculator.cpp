#include <iostream>

using namespace std;

int main() {
    int option = 0;
    float firstNum = 0;
    float secondNum = 0;
    cout << "1. Add\n";
    cout << "2. Substract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Choose a option: ";
    cin >> option;
    cout << "Choose your first number: ";
    cin >> firstNum;
    cout << "Choose your second number: ";
    cin >> secondNum;
    switch (option) {
        case 1:
            cout << firstNum + secondNum << "\n";
            break;
        case 2:
            cout << firstNum - secondNum << "\n";
            break;
        case 3:
            cout << firstNum * secondNum << "\n";
            break;
        case 4:
            cout << firstNum / secondNum << "\n";
            break;
    }
    
    return 0;
}