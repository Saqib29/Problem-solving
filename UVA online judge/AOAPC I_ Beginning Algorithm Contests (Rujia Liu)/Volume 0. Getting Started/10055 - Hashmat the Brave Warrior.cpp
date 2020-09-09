#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long int a, b;   //there was data type problem
                          // unsigned didn't work here!
    while(scanf("%lld %lld", &a, &b) != EOF)
    {
        if(a<b)
        {
            printf("%lld\n", b-a);
        }
        else
            printf("%lld\n", a-b);
    }
    return 0;
}
