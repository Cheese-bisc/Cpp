#include <iostream>
using namespace std;
int bintodec(int x);
int main() {
    int n;
    cout << "Enter binary number :";
    cin >> n;

    cout << bintodec(n);
    return 0;
}
int bintodec(int x) {
    int ans = 0, y = 0;
    while (x > 0) {
        int rem = x % 10;
        ans += rem << y; // same as rem*(2 raised to y) :: left shift operator
                         // << :: shifts the binary to n places t the left
        // for ex.   (1010)2 << 1 --> (10100)2 --> This means 10 left shifted by
        // 1 is 20 which is (10*(2 raised to 1))
        x /= 10;
        y++;
    }
    return ans;
}
