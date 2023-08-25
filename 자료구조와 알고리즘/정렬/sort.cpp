#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 오름차순
template <typename T>
void ascending_order(T beginIter, T endIter)
{
    sort(beginIter, endIter);
}

int main()
{
    int arr[5] = {4, 2, 3, 5, 1};
    vector<string> vec = {"orange", "banana", "apple", "lemon"};
    
    ascending_order(begin(arr), end(arr));
    ascending_order(vec.begin(), vec.end());
    
    cout << "Ascending order - arr: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Ascending order - vec: ";
    for (const string &fruit : vec) {
        cout << fruit << " ";
    }
    cout << endl;

    return 0;
}
