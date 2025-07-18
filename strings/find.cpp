#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter name :";
    getline(cin, name); // To get spaces in names. Syntax yaad rakho.

    cout << name.find("r"); // gives index of the element

    cout << name.erase(0, 6); // Beginning index , No. of characters to remove

    return 0;
}
