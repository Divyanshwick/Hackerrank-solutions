#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int z[n];
    float a=0,b=0,c=0,a1,b1,c1;
    for(i=0;i<n;i++)
    scanf("%d",&z[i]);
    for(i=0;i<n;i++)
    {
        if(z[i]>0)
        a++;
        else if (z[i]<0)
        b++;
        else if(z[i]==0)
        c++;

    }
    a1=a/n;
    b1=b/n;
    c1=c/n;
printf("%.6f\n%.6f\n%.6f",a1,b1,c1);

return 0;}
