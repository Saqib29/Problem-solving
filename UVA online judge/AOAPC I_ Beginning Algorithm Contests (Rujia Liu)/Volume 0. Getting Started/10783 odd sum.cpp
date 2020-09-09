#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int T, sum, c=0, i, a, b;
    scanf("%d", &T);
    while(T--)
    {
        sum = 0;
        c++;
        scanf("%d %d", &a, &b);
        for(i=a; i<=b; i++)
        {
            if(i%2 != 0)
                sum = sum + i;
        }
        printf("Case %d: %d\n", c, sum);
    }
}
