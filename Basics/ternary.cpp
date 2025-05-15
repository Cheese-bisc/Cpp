#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number : ";
    cin >> n;

    (n % 2 == 0) ? cout << "IsEven" : cout << "IsOdd";

    return 0;
}
