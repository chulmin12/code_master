#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    
    if (str1 > str2){
        cout << str1 << endl;
    }
    if (str1 < str2){
        cout << str2 << endl;
    }
}
