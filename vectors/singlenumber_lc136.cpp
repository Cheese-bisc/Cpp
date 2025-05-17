#include <iostream>
#include <vector>
using namespace std;
int SingleNum(vector<int> &num);
int main() {
    vector<int> vec = {1, 2, 3, 2, 1};
    int ans = 0;
    for (int val : vec) {
        ans = ans ^ val;
    }
    cout << ans;
}
/*int a = 12, b = 21;
   a = a ^ b;
   b = a ^ b;
   a = a ^ b;
   cout << a << " " << b << endl;*/

/* n^n = 0
  n^0 = n*/
