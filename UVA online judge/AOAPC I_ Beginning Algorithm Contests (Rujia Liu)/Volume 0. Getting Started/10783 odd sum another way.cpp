#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int T, i, sum, c=0, a, b;
    scanf("%d", &T);
    while(T--)
    {
        sum = 0;
        c++;
        scanf("%d %d", &a, &b);
        if(a%2 == 0)
            a = a+1;
        for(i=a; i<=b; i+=2)
        {
            sum = sum + i;
        }
        printf("Case %d: %d\n", c, sum);
    }
    return 0;
}
