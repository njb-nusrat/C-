#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a; int b;
    cin >> a >> b;
    
    // if (a>b)
    // {
    //     cout << b;
    // }
    // else
    // {
    //     cout << a;
    // }
    
    // cout << min(a,b) << endl;
    // cout << max(a,b) << endl;

    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;


    return 0;
}