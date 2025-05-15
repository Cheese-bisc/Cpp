#include <iostream>
using namespace std;
int main() {
    int a, b;
    char x;
    cout << "Enter both operands with operator in between : ";
    cin >> a >> x >> b;

    switch (x) {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "Invalid operator";
    }
    return 0;
}
