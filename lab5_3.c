#include<stdio.h>
int main()
{
    int n,m=0,i,j=0,k;
    int c[3]={2,3,5};
    scanf("%d",&n);
    for(i=1;;i++)
    {
        k=i;
        while(j!=3)
        {
            if(k%c[j]==0)
            {
                k=k/c[j];
            }
            else
                j++;
        }
        j=0;
        if(k==1)
        {
            m++;
            if(m==n)
            {
                printf("%d",i);
                break;
            }
        }

    }
return 0;
}
