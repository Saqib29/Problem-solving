#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, len;
    string s;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        getline(cin, s);
        len = s.size();

        if(len > 10)
        {
            cout << s[0] << len-2 << s[len-1] << endl;
        }
        else
            cout << s << endl;
    }
    return 0;
}
