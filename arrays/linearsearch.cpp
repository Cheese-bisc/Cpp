#include <iostream>
using namespace std;
int lsearch(int arr[], int size, int search);
int main() {
    int n, s;
    cout << "Enter number of elements : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search :";
    cin >> s;

    int ans = lsearch(arr, n, s);
    cout << "Element is at index :" << ans;

    return 0;
}
int lsearch(int arr[], int size, int search) {

    for (int i = 0; i < size; i++) {
        if (arr[i] == search)
            return i;
    }
    return -1;
}
