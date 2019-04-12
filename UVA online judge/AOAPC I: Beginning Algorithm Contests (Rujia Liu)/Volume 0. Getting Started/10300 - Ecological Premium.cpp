#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, f;
    long long fy, a, ef, sum = 0;
    while(scanf("%d", &n) != EOF)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d", &f);
            while(f--){
                scanf("%lld %lld %lld", &fy, &a, &ef);
                sum += (fy*ef);
            }
            printf("%lld\n", sum);
            sum = 0;
        }
    }
    return 0;
}
