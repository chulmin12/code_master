/*
 주어진 N개의 수에서 다른 두 수의 합으로 표현되는 수가 있다면 그 수를 '좋은 수'라고 한다.
 N개의 수 중 좋은 수가 총 몇 개인지 출력하시오.
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    cout << N
    
    vector<int> numbers(N, 0);
    
    for(int i = 0; i < N; i++){
        cin >> numbers[i];
    }
    
    sort(numbers.begin(), numbers.end());
    
    
}
