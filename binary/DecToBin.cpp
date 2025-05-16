#include <iostream>
using namespace std;
int dectobin(int x);
int main() {
    int n;
    cout << "Enter number : ";
    cin >> n;

    cout << dectobin(n);
    return 0;
}
int dectobin(int x) {
    int pow = 1, ans = 0;
    while (x > 0) {
        int rem = x % 2;
        x /= 2;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}
