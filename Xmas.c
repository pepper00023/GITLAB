#include<stdio.h>
void main()
{
    int i,j,n,c=65;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(j=0;j<(int)(((n-2)/2))*2+1;j++)printf(" ");
            for(j=0;j<i;j++)
            {
                printf("%c",c);
                c++;
                if(c==91)c=65;
            }
        }
        else
        {
            for(j=0;j<((int)(n/2))*2-i;j++)printf(" ");
            for(j=0;j<i;j++)
            {
                printf("%c",c);
                c++;
                if(c==91)c=65;
            }
        }
        printf("\n");
    }
}
