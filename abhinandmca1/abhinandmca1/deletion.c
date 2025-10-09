#include<stdio.h>
void main()
{
 int a[50],i,n,p,item;
 printf("enter the limit:");
 scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
printf("enter the position");
scanf("%d",&p);
printf("enter the element to be deleted");
scanf("%d",&item);
n=n-1;
item=a[p-1];
printf("the deleted element is %d\t",item);
for(i=p-1;i<=n;i++)
{
 a[i]=a[i+1];
}
printf("new array is ");
for(i=0;i<n;i++)
{
  printf("%d\t",a[i]);
}
}
