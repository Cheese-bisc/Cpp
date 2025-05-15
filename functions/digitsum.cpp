#include <iostream>
using namespace std;
int digitsum(int x);
int main() {
    int n;
    cout << "Enter number : ";
    cin >> n;

    cout << "Sum of digits is : " << digitsum(n);

    return 0;
}
int digitsum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
