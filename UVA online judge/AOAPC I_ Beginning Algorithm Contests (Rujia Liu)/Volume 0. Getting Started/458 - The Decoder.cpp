#include <iostream>
#include <string>

using namespace std;
int main()
{
    int size_;
    string s;
    while(getline(cin,s))
    {


    size_ = s.size();
    for(int i=0; i<size_; i++)
    {
        s[i] = s[i] - 7;
    }
    cout << s << endl;
    }

    return 0;
}
