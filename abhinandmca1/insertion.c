#include<stdio.h>
void main()
{
int a[50],i,n,p,item;
printf("Enter the limit");
scanf("%d",&n);
printf("Enter the elements");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
printf("enter the position");
scanf("%d",&p);
printf("enter the element to be inserted");
scanf("%d",&item);
n=n+1;
for(i=n;i>=p-1;i--)
{
 a[i+1]=a[i];
}
a[p-1]=item;
printf("The new array is ");
for(i=0;i<n;i++)
{
  printf("%d\t",a[i]);
}
}
