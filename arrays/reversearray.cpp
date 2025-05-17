#include <iostream>
using namespace std;
void reversearr(int arr[], int size);
int main() {
    int n, i;
    cout << "Enter size of array :";
    cin >> n;

    int arr[n];
    cout << "Enter array";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    reversearr(arr, n);
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
void reversearr(int arr[], int size) {
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
