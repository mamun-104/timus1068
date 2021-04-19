#include<stdio.h>
#include<math.h>

/// Timus 1068

int main()
{
    int n,i,sum=0;
    scanf("%d",&n);

    if(n>0)
    {
        for(i=1;i<=n;i++)
        {
            sum = sum+i;
        }
        printf("%d",sum);
    }
    else
    {
        for(i=1;i>=n;i--)
        {
            sum = sum+i;
        }
        printf("%d",sum);
    }


    return 0;
}





