#include<iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int len, i, j;
    getline(cin,s);
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>=65 && s[i]<=92)
            s[i] = s[i] + 32;
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o'&& s[i]!='u' && s[i]!='y')
        {
            cout << "." << s[i];
        }
    }
    return 0;
}
