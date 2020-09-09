#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    int c=1, a=1, b=1;
    while(a!=0 && b!=0 && c !=0){
    scanf("%d %d %d", &a, &b, &c);
    if(a==0 && b==0 && c==0)
        break;

    int s, t, u;
    s = pow(a,2)+0.5;
    t = pow(b,2)+0.5;
    u = pow(c,2)+0.5;


    (s+t == u || s+u == t || u+t == s) ? printf("right\n") : printf("wrong\n");


    }

    return 0;
}
