#include <iostream>
#include <cctype>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    int c;
    string s;
    while(getline(cin,s))
    {
        c=0;
        for(int i=0; s[i] != '\0'; i++)
        {
            if(isalpha(s[i]))
            {
                c++;
                while(isalpha(s[i]))
                    i++;
            }
        }
        printf("%d\n", c);
    }
}
