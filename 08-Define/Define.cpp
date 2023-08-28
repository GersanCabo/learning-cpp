#include <iostream>

#define multiply(num1,num2) num1*num2;
#define square(num) num*num;

using namespace std;

int main() {

    int result = multiply(3,4);
    cout << result << "\n";

    return 0;
}