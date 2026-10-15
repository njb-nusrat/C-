#include<iostream>
using namespace std;
int main()
{
    int a;
    char b;
    double d;
    cin >> a >> b >> d;
    cout << a << endl << b << " " << d << endl;
    
    // char c = 'a';
    // int ascii = c;
    // cout << ascii << endl;

    char c = 'a';
    cout << (int)c << endl;

    int y = 65;
    cout << (char)y << endl;
    
    return 0;
}