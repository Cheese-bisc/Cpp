#include <cmath>
#include <iostream>
using namespace std;
void IsPrime(int x);
int main() {
    int n;
    cout << "Enter number : ";
    cin >> n;

    IsPrime(n);
    return 0;
}
void IsPrime(int x) {
    int i, j, a = 0;
    for (i = 2; i < sqrt(x); i++) {
        if (x % i == 0) {
            a = 1;
            break;
        }
    }
    if (a == 0)
        cout << "Number is Prime";
    else
        cout << "Number is Composite";
}
