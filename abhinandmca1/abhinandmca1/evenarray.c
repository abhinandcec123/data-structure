#include<stdio.h>
void main()
{
int a[50],i,n;
printf("enter the limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
printf("even numbers are:");
for(i=0;i<n;i++)
{
if(a[i]%2==0)
printf("%d\n",a[i]);
}
}

 
