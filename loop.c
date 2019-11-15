#include <stdio.h>
int main()
{
    int number,i;
    int a=2;
    printf("enter no. of loops=");
    scanf("%d",&number);
    for(int i=0;i<number;i++)
    {
        int sum=a+(i*2);
        printf("num=%d\n",sum);
        for(int j=0; j<sum; j++)
        {
            printf("-");  
        }
        printf("\n");
    }
    return 0;
}
