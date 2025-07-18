#include <iostream>
using namespace std;

int main() {
    const int SIZE = 100;
    string foods[SIZE];

    // wanting to fill entire array or a large part of it with the same element.
    // Use fill fxn

    fill(foods, foods + (SIZE / 2), "pizza");
    fill(foods + (SIZE / 2), foods + SIZE, "hamburger");

    for (string food : foods) {
        cout << food;
    }
    return 0;
}
