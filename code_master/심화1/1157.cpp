#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    
    string max;
    for (int i = 0; i < str.size(); i++){
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i];
        else
            continue;
    }
    max = *max_element(str.begin(), str.end());
    cout << max << endl;
}


// 여기부터 다시 하기
