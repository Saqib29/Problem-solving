#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int T, a, b;
    scanf("%d", &T);
    for(int i=1; i<=T; i++)
    {
        scanf("%d %d", &a, &b);
        if(a >= 0 && b >= 0 && a <= 10 && b <= 10)
        {
            printf("Case %d: %d\n", i, a+b);
        }
    }
    return 0;
}
