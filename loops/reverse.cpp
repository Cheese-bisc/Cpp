#include <iostream>
using namespace std;
int main() {
    int n, reverse = 0;
    cout << "Enter number to reverse : ";
    cin >> n;

    // while (n > 0) {
    //     cout << n % 10;
    //     n /= 10;
    // }
    while (n > 0) {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n /= 10;
    }
    cout << reverse;
    return 0;
}
