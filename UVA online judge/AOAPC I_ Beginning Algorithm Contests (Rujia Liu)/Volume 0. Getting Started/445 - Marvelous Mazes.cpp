#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s;
    int i,c=0;

    while(getline(cin,s))
    {
        for(i=0; s[i] != '\0'; i++)
        {
            if(isdigit(s[i]))
            {
                c = c+ (s[i] - '0');
                i++;
                if(s[i] == 'b')
                {
                    while(c--){
                        cout << " ";
                    }
                    c=0;
                    continue;
                }
                if(s[i] != '!' && !isdigit(s[i]))
                {
                    while(c--){
                        cout << s[i];
                    }
                    c=0;
                    continue;
                }
                i--;
            }
            if(s[i] == '!')
            {
                 cout << endl;
            }
        }
        cout << endl;
    }
}
