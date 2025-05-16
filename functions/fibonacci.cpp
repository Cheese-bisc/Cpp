#include <iostream>
using namespace std;
int fibonacci(int x);
int main() {
    int n;
    cout << "Enter the fibonacci term you want : ";
    cin >> n;

    int ans = fibonacci(n);
    cout << ans;
    return 0;
}
int fibonacci(int x) {
    if (x <= 2)
        return 1;
    return fibonacci(x - 1) + fibonacci(x - 2);
}
