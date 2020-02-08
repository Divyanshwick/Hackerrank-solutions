#include<stdio.h>
int main()
{int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    if(a[i]>=38)
    {
        if((((a[i]/10)*10)+5)<a[i])
        {if(((((a[i]/10)*10)+10)-a[i])<3)
        a[i]=(((a[i]/10)*10)+10);
        }
        else
        {if(((((a[i]/10)*10)+5)-a[i])<3)
            a[i]=((a[i]/10)*10)+5;
    }
}
}
for(i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}
