#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int i, n;
    cin >> n;
    
    int a[n];
    
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    
    sort(a,a+n,greater<int>());
    
    for(i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}
