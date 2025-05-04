#include <cmath>
#include <iostream>
int main() {
    using namespace std;

    int x = 4, z;
    float y = 9.77;
    // z = max(x, y);   // -> max of nos.
    // z = min(x, y);   // -> min of nos.
    // z = pow(2,4);      // -> power of a number
    // z = sqrt(4);       // -> square root of a no.
    // z = ceil(y);         // -> round up a value
    z = floor(y); // -> round down a value

    cout << z << '\n';
}
