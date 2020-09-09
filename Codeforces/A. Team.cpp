#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, i, j, l;
    vector<vector<int> > A;
    cin >> n;
    for(i=0; i<n; i++)
    {
        A.push_back(vector<int>());
        for(j=0; j<3; j++)
        {
            cin >> l;
            A[i].push_back(l);
        }
    }
    int p =0, c;
    for(i=0; i<n; i++)
    {
        c=0;
        for(j=0; j<3; j++)
        {
            if(A[i][j] == 1)
            ++c;
        }
        if(c >= 2 || c == 3)
            ++p;
    }

    cout << p << endl;
}
