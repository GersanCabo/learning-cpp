#include <iostream>

using namespace std;

int main() {
    int password;
    int passwordLogin;
    cout << "Create your password (only numbers and minimum length of 4)\n";
    if(cin >> password && password >= 1000) {
        cout << "Password registered\n";
        cout << "Type your password or the admin password (psssss, the admin password is 1234)\n";
        cin >> passwordLogin;
        if (passwordLogin == password || passwordLogin == 1234) {
            cout << "Correct password\n";
        } else {
            cout << "Password not exist\n";
        }
    } else {
        cout << "Invalid password\n";
    };

    return 0;
}