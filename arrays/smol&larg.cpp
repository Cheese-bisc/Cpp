#include <climits>
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];

    cout << "Enter array :";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // using bubble sort to sort first
    // for (int i = 0; i < n - 1; i++) {
    //     for (int j = 0; j < n - i - 1; j++) {
    //         if (arr[j] > arr[j + 1]) {
    //             int temp = arr[j + 1];
    //             arr[j + 1] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

    // cout << "Smallest element is : " << arr[0] << endl;
    // cout << "Largest element is : " << arr[n - 1] << endl;

    // using implicit minimum and maximum functions
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        mini = min(arr[i], mini);
        maxi = max(arr[i], maxi);
    }
    cout << "Minimum is : " << mini << endl;
    cout << "Maximum is :" << maxi << endl;
    return 0;
}
