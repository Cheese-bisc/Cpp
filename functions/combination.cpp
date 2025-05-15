#include <iostream>
using namespace std;
int factorial(int x);
int main() {
    int n, r;
    cout << "Enter n and r : ";
    cin >> n >> r;

    int combination = factorial(n) / ((factorial(r)) * factorial(n - r));
    cout << combination;
    return 0;
}
int factorial(int x) {
    if (x <= 1)
        return 1;
    int fact = x * factorial(x - 1);
    return fact;
}
