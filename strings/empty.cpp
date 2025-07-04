#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter name :";
    getline(cin, name); // To get spaces in names. Syntax yaad rakho.

    if (name.empty()) { // See if input is empty
        cout << "Enter a name !!";
    } else
        cout << "Welcome " << name;

    return 0;
}
