#include <bits/stdc++.h>

using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
    
};


int main()
{
    Student rahim;
    rahim.roll=9;
    rahim.cls=9;
    rahim.section='A';
    char nm[100]="Rahim Uddin";
    strcpy(rahim.name,nm);
    
    Student karim;
    karim.roll=55;
    karim.section=9;
    char nm2[100]="Karim";
    strcpy(karim.name,nm2);
    
    cout<<rahim.name;
    
    return 0;
}
