#include <iostream>
int main() {
    int questions = 8;
    int total = 10;

    float marks = (float)questions / total * 100; // explicit
    std::cout << marks;
}
