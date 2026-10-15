#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double d = 34.56789;
    cout << fixed << setprecision(5) << d << endl;
    return 0;
}