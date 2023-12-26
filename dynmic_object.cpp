#include <bits/stdc++.h>

using namespace std;

    class Student
    {
        public:
           char name[100];
           int roll;
           int cls;
           int section;
        
           Student(int r,int s,int c,char * n)
           {
             roll=r;
             section=s;
             cls=c;
             strcpy(name,n);
            
           }
    };
    
int main()
{
    char name[100]="Rahim Uddin Chowdhury";
    Student* rahim = new Student(5,'A',9,name);
    //To update the value of roll
    (*rahim).roll = 55;
    
    //Printing values
    cout << rahim -> roll << endl;
    cout << rahim -> section << endl;
    cout << rahim -> cls << endl;
    cout << rahim -> name << endl;
    
    //To delete dynamic object
    delete rahim;
    
    //To print dynamic values after printing
    cout << rahim -> roll << endl;
    cout << rahim -> section << endl;
    cout << rahim -> cls << endl;
    cout << rahim -> name << endl;
    
    return 0;
}
