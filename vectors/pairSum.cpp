#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> nums, int target);
int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target;

    cout << "Enter target sum :";
    cin >> target;

    vector<int> ans = pairSum(nums, target);
    cout << "Indices are :" << ans[0] << " " << ans[1] << endl;
    return 0;
}
vector<int> pairSum(vector<int> nums, int target) {
    int i = 0, j = nums.size() - 1;
    vector<int> ans;
    while (i < j) {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
            j--;
        else if (pairSum < target)
            i++;
        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
