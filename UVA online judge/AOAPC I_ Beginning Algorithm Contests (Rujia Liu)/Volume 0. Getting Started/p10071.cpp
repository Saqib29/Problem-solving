#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int  v, t;

    while(scanf("%d %d", &v, &t) != EOF)
    {
        //scanf("%d %d", &v, &t);
        if(v>=-100 && v<=100 && 0<=t && t<=200)
            printf("%d\n", 2*v*t);
    }
    return 0;
}
