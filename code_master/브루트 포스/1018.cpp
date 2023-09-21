#include <iostream>
#include <vector>
// 여기부터 다시 하기
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char arr[n+1][m+1];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";  // Add a space after each character
        }
        cout << endl;
    }
    
    return 0;
}

