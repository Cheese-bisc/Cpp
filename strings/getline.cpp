#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter name :";
    getline(cin, name); // To get spaces in names. Syntax yaad rakho.

    if (name.length() > 12) { // Length aa jayega
        cout << "Try Again";
    } else
        cout << "Welcome " << name;

    return 0;
}
