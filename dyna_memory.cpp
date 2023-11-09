#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    int *a = new int[5];
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    
    int *b = new int[7];
    for(int i=0; i<5; i++)
    {
        b[i]=a[i];
    }
    b[5]=44;
    b[6]=55;
    
    delete[] a; 
    
    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<" ";
    }
    
       
    

    return 0;
}
