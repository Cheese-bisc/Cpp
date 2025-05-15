#include <iostream>
int main() {
    using namespace std;
    int n, sum;
    cout << "Enter number : ";
    cin >> n;

    sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of digits is : " << sum;

    return 0;
}
