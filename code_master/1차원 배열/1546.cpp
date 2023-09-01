#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
// 수정
using namespace std;

int main()
{
    int n, a;
    double avg;
    
    cin >> n;
    vector<int> sum;
    
    for (int i = 0; i < n; i++){
        cin >> a;
        sum.push_back(a);
    }
    int max_val = *max_element(sum.begin(), sum.end());
    
    for (int i = 0; i < n; i++){
        sum[i] = sum[i] * 100 / max_val;
    }
    avg = accumulate(sum.begin(), sum.end(), 0) / static_cast<double>(n);
    
    cout << fixed;
    cout.precision(2);
    cout << avg << endl;
}
