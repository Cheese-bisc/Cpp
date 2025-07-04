#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter name :";
    getline(cin, name);

    name.insert(0, "@"); // Index and maal
    cout << name;
}
