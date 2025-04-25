#include <iostream>
int main() {
    const float PI =
        3.13159; // convention if u use const -> variable ka name CAPITAL
    // float r = 4.5;
    float r;
    std::cout << "Enter r : ";
    std::cin >> r;

    std::cout << "circumference is : " << 2 * PI * r << '\n';
    std::cout << "area is : " << PI * (r * r);
}
