#include<stdio.h>
int n,i;
#define s1() for(i=0;i<n;i++)
int main()
{
    int n,x,y,c=0;
    scanf("%d",&n);
    int a[n];
    s1()
    scanf("%d",&a[i]);
    x=a[0];
    s1()
    {
        if(a[i]>x)
        x=a[i];
    }
    s1()
    {
        if(a[i]==x)
        c++;
    }
    printf("%d",c);
    return 0;
}
