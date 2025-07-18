#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    int compNumb, playerNumb, tries = 1;
    srand(time(0));

    compNumb = rand() % 100 + 1;
    cout << "***** NUMBER GUESSING GAME ***** \n";
    cout << "Guess the number the computer chose between 1 and 100 \n";

    do {
        cout << "Guess no. " << tries << " : ";
        cin >> playerNumb;
        tries++;

        if (compNumb == playerNumb) {
            cout << "You guessed the number. HOORAYY !!";
        } else if (playerNumb < compNumb - 5 || playerNumb > compNumb + 5) {
            cout << "COLDDD !! \n";
        } else if (playerNumb > compNumb - 5 || playerNumb < compNumb + 5) {
            cout << "HOTTT !! \n";
        }
    } while (playerNumb != compNumb);
}
