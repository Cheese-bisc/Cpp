#include <cmath>
#include <iostream>
int main() {
    float a, b, c;

    std::cout << "Enter side A";
    std::cin >> a;
    std::cout << "Enter side B";
    std::cin >> b;

    std::cout << "Hypotenuse is : " << sqrt(pow(a, 2) + pow(b, 2)) << '\n';
}
