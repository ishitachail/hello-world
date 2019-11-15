#include <stdio.h>
int main()
{
    int p,n,r,s;
    printf("enter principle amount=");
    scanf("%d",&p);
    printf("enter rate per annum=");
    scanf("%d",&r);
    printf("enter no of years=");
    scanf("%d",&n);
    s=p*n*r/100;
    printf("simple interest=%d\n",s);
    return 0;
}