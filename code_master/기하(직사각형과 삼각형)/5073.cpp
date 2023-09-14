#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    while(true){
        cin >> a >> b >> c;
        
        if ((a + b + c) == 0)
            return 0;
        
        else if (a == b && b == c){
            cout << "Equilateral" << endl;
        }
        
        else if (a == b || a == c || b == c){
            cout << "lsosceles" << endl;
        }
        
        else if (a != b && a != c && b != c){
            cout << "Scalene" << endl;
        }
        else if (a > b+c || b >= c + a || c >= a + b)
            cout << "Invaild" << endl;
    }
}
