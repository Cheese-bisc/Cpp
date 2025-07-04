#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n :";
    cin >> n;

    int i, j, k;
    for (i = 0; i < n; i++) {
        for (k = 0; k < n - i; k++)
            cout << " ";
        for (j = 0; j < i; j++)
            cout << "*";
        cout << '\n';
    }
    return 0;
}
