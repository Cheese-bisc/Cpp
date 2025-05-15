#include <iostream>
int main() {
    using namespace std;
    int count, n;
    cout << "Enter number : ";
    cin >> n;
    // for (count = 0; n > 0; count++)
    //     n /= 10;

    count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }

    cout << "No. of digits is : " << count;
}
