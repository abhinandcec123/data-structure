#include<stdio.h>
void main()
{
 int a[50],i,n,sum=0;
 printf("enter the limit");
 scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  sum=sum+a[i];
 }
 printf("sum=%d",sum);
}
