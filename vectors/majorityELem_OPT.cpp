#include <algorithm>
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
    sort(nums.begin(), nums.end()); // 1,1,2,2,2

    int freq = 1, ans = nums[0];
    for (int i = 1; i < size; i++) {
        if (nums[i] == nums[i - 1]) {
            freq++;
        } else {
            freq = 1;
        }
        if (freq > size / 2) {
            ans = nums[i];
            return ans;
        }
    }
    return -1;
}
