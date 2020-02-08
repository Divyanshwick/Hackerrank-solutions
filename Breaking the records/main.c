#include<stdio.h>
int main(){
int n,i,m,c1=0,c2=0;
scanf("%d",&n);
long long int arr[n];
for(i=0;i<n;i++)
scanf("%lld",&arr[i]);
m=arr[0];
for(i=1;i<n;i++)
{
    if(arr[i]>m){
    m=arr[i];
    c1++;
    }
}
m=arr[0];
for(i=1;i<n;i++)
{if(arr[i]<m)
{
    m=arr[i];
    c2++;
}

}
printf("%d %d",c1,c2);
return 0;
}
