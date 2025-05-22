#include <climits>
#include <iostream>
using namespace std;
int main() {
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    cout << "Array is :" << endl;
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    cout << "Maximum sub-array sum is :";

    int i, j, maxSum = INT_MIN, currSum = 0;

    for (i = 0; i < 7; i++) {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
            currSum = 0;
    }
    cout << maxSum << endl;

    return 0;
}
