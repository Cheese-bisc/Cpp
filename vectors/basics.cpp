#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    // cout << vec[0]<<endl;
    /*In vectors we use for each loop. That means the iterator works on the values and not on the index*/
    
    for (int val : vec)
        cout << val << endl;
}