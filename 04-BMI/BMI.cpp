#include <iostream>
#include <math.h>

using namespace std;

/*
 * No valido los datos, eso lo aprendere más adelante 
*/
int main() {
    float height;
    float weight;
    float bmi;
    int bmix100;
    cout << "BMI Calculator" << "\n";
    cout << "Type your height (in meters): ";
    cin >> height;
    cout << "Type your weight (in kg): ";
    cin >>  weight;
    bmi = ceil( ( weight / ( height * height ) ) * 100) / 100;
    cout << "Your BMI is: " << bmi << "kg/m²\n";
    if (bmi < 18.5) {
        cout << "You are in underweight";
    } else if (bmi < 24.9) {
        cout << "You are in a recommended weight";
    } else if (bmi < 29.9) {
        cout << "You are in overweight";
    } else if (bmi < 34.9) {
        cout << "You are obese";
    } else {
        cout << "You are extremely obese";
    }
    cout << "\n";
    return 0;
}