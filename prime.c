# include <stdio.h>
int main()
{
    for (int i=2; i<101; i++)
    {
        int isdivisible=0;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {isdivisible=1;
            }
        }
        if(isdivisible==0)
        {
            printf("%d, ",i);
        }

    }
return 0;
}