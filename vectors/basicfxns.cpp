#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec;

    cout << "Initial size : " << vec.size()
         << endl;      // vec.size --> gives size of vector
    vec.push_back(25); // vec.push_back --> puts an element at the last position
    vec.push_back(35);
    vec.push_back(45);
    cout << "After  pushback, size :" << vec.size() << endl;

    vec.pop_back(); // vec.pop_back --> last value ura dega

    cout << vec.front() << endl;
    cout << vec.back() << endl;

    cout << vec.at(0) << endl;
}
