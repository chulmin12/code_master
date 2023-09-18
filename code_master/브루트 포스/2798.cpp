#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    vector<int> cards;
    
    for (int i = 0; i < N; i++){
        int a;
        cin >> a;
        cards.push_back(a);
    }
    
    sort(cards.begin(),cards.end());
    
    int sum = 0;
    int i = N - 1;
    while(true){
        sum = cards[i] + cards[i - 1] + cards[i - 2];
        if (sum > M){
            i--;
        }
        else{
            cout << sum << endl;
            break;
        }
    }
    
}
