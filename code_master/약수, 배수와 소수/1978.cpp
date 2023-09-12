#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    cin >> num;
    
    vector<int> nums;
    
    for (int i = 0; i < num; i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }
    
    for (int i = 0; i < nums.size(); i++){
        if (
        cout << nums[i] << ", ";
    }
}
