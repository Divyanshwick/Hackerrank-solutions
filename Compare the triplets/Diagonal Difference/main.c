#include<stdio.h>
#include<stdlib.h>
int n,i,j;
#define s1() for(i=0;i<n;i++)
#define s2() for(j=0;j<n;j++)
int main()
{
    int sm1=0,sm2=0,r;
    scanf("%d",&n);
    int a[n][n];
    s1()
    {s2()
        scanf("%d",&a[i][j]);
    }
    s1()
    {
        s2()
        {
        if(i==j)
        sm1+=a[i][j];

    }
    }
    s1()
    {
        s2()
        {
        if (i+j==n-1)
        sm2+=a[i][j];
        }
    }
    r=abs(sm1-sm2);
    printf("%d",r);
    return 0;

}

