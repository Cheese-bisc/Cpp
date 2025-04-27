#include <iostream>
int main() {
    using namespace std;
    const float PI =
        3.13159; // convention if u use const -> variable ka name CAPITAL
    // float r = 4.5;
    float r;
    cout << "Enter r : ";
    cin >> r;

    cout << "diameter is : " << 2 * r << '\n';
    cout << "circumference is : " << 2 * PI * r << '\n';
    cout << "area is : " << PI * (r * r);
}
