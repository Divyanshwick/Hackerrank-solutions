#include<stdio.h>
int i,n;
#define s1() for(i=0;i<n;i++)
int main()
{
    n=3;
    int a[n],b[n],c[2];
    for(i=0;i<2;i++)
        c[i]=0;
    s1()
    scanf("%d",&a[i]);
    s1()
    scanf("%d",&b[i]);
    s1()
    {
    if(a[i]>b[i])
    c[0]++;
    else if(b[i]>a[i])
    c[1]++;
    else if(a[i]==b[i])
    continue;
    }
    for(i=0;i<2;i++)
    printf("%d ",c[i]);
return 0;
}
