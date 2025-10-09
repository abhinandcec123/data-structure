#include<stdio.h>
void main()
{
int a[50],i,n,key,flag;
printf("enter the limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
 	if(a[i]==key)
	{
 		printf("element %d is found at position %d ",key,i+1);
 		flag=1;
 	}
 	}
 	if(flag==0)
 	{
 	printf("element is not found");
 	}
 }
