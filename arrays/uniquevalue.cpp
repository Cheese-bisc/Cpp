#include <iostream>
using namespace std;
void unique(int arr[], int size);
int main() {
    int n;
    cout << "Enter size of array :";
    cin >> n;
    int arr[n];

    cout << "Enter array :";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unique(arr, n);
    return 0;
}
void unique(int arr[], int size) {
    int i, j;
    cout << "Unique elements are :";
    for (i = 0; i < size; i++) {
        bool IsUnique = true;
        for (j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                IsUnique = false;
                break;
            }
        }
        if (IsUnique == true)
            cout << arr[i] << " ";
    }
    return;
}
