#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
int main() {

    srand(time(NULL));

    int number = (rand() % 6) + 1; /* rand() % 6 will give a number from 0 to 5
                            . So make it (rand() %6) + 1 to get 1-6 */

    cout << "Dice roll gives : " << number;
}
