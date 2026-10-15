#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Saturday\n";
        break;
    case 2:
        cout << "Sunday\n";
        break;
    case 3:
        cout << "Monday\n";
        break;
    case 4:
        cout << "Tuesday\n";
        break;
    default:
        cout << "Wrong Input";
        break;
    }

    return 0;
}