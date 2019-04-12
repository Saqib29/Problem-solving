#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int T, n;
    scanf("%d", &T);
    while(T--)
    {
        int s, e;
        scanf("%d", &n);
        if(n>10)
        {
            s=n-10;
            e=10;
            printf("%d %d\n", s, e);
        }
        else{
            printf("%d %d\n", 0, n);
        }
    }
}
