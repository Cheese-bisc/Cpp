#include <iostream>
#include <vector>
using namespace std;
int majority(vector<int> &nums, int size);
int main() {
    vector<int> vec = {1, 2, 2, 1, 2};
    int size = vec.size();
    int majorityElem = majority(vec, size);

    cout << majorityElem << endl;
}
int majority(vector<int> &nums, int size) {
    int freq = 0, ans = 0;
    for (int i = 0; i < size; i++) {
        if (freq == 0) {
            ans = nums[i];
        }
        if (ans == nums[i])
            freq++;
        else
            freq--;
    }
    return ans;
}
