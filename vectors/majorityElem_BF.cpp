#include <iostream>
#include <vector>
using namespace std;
int majority(vector<int> nums, int size);
int main() {
    vector<int> vec = {1, 2, 2, 1, 1};
    int size = vec.size();
    int majorityElem = majority(vec, size);

    cout << majorityElem << endl;
}
int majority(vector<int> nums, int size) {
    for (int val : nums) {
        int freq = 0;
        for (int elem : nums) {
            if (val == elem)
                freq++;
        }
        if (freq > size / 2)
            return val;
    }
    return -1;
}
