#include<bits/stdc++.h>
using namespace std;

int main() 
{
    char s[100005]; 
    
    while (cin.getline(s, 100005)) 
    {
        
        char ans[100005]; 
        int n = 0; 

        int len = strlen(s); 

        for (int i = 0; i < len; i++) 
        {
            if (s[i] != ' ') 
            {
                ans[n] = s[i];
                n++; 
            }
        }

      
        sort(ans, ans + n);

       
        for (int i = 0; i < n; i++) 
        {
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}