#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int x;
   cin >> x;

   switch (x%2)
   {
    case 0:
        cout << "Even\n";
        break;
    
    case 1 :
        cout << "Odd\n";
        break;
   
   default:
    break;
   }



    return 0;
}