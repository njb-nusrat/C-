#include <bits/stdc++.h>
using namespace std;


class Student
{
    public:
    int id;
    string name;
    char section;
    int total_marks;
};

int main() 
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) 
    {
        
        
        Student s1, s2, s3;

      
        cin >> s1.id >> s1.name >> s1.section >> s1.total_marks;
        cin >> s2.id >> s2.name >> s2.section >> s2.total_marks;
        cin >> s3.id >> s3.name >> s3.section >> s3.total_marks;

        
        Student ans;

        //check s1

        if ((s1.total_marks > s2.total_marks || (s1.total_marks == s2.total_marks && s1.id < s2.id)) &&
            (s1.total_marks > s3.total_marks || (s1.total_marks == s3.total_marks && s1.id < s3.id))) 
        {
            ans = s1;
        }

        //check s2
        else if ((s2.total_marks > s1.total_marks || (s2.total_marks == s1.total_marks && s2.id < s1.id)) &&
                 (s2.total_marks > s3.total_marks || (s2.total_marks == s3.total_marks && s2.id < s3.id))) 
        {
            ans = s2;
        }
      
        else 
        {
            ans = s3;
        }
        
        cout << ans.id << " " << ans.name << " " << ans.section << " " << ans.total_marks << endl;


    }

    return 0;
    
}