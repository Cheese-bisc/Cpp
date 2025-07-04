#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter name :";
    getline(cin, name); // To get spaces in names. Syntax yaad rakho.

    name.append("@gmail.com");
    cout << "Your email id will be " << name;

    return 0;
}
