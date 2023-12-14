/* Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    char input_char;
    cin >> input_char;
    
    if(input_char >= 65 && input_char <= 90)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (input_char >= 97 && input_char <= 122)
    {
        cout << "ALPHA" << endl;  
        cout << "IS SMALL" << endl;
    }
    else if(input_char >= 48 && input_char <= 57)
    {
        cout << "IS DIGIT" << endl;
    }
    
    return 0;
}

