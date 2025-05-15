#include <iostream>
#include <ostream>
using namespace std;
int main() {
    int n, i, j;
    cout << "Enter n : ";
    cin >> n;

    int num = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++, num++)
            cout << num << " ";

        cout << endl;
    }
}
