#include <iostream>

using namespace std;

int main()
{
    char arr[5][15] = {0,};
    
    for (int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; arr[i][j] != '\0'; j++){
            cout << arr[i][j] << " ";
        }
    }

    cout << endl;

    return 0;
}
