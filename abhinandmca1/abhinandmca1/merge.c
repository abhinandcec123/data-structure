#include<stdio.h>
void main()
{
int a[50],b[50],c[00],m,n,i,j,k;
printf("\n Enter the size of the first array:");
scanf("%d",&m);
printf("\n enter the elements of first array(sorted order):");
for(i=0;i<m;i++)
{
 scanf("%d",&a[i]);
}
printf("\n Enter the size of the second array:");
scanf("%d",&n);
printf("\n Enter the elements of second array(sorted order):");
for(i=0;i<n;i++)
{
 scanf("%d",&b[i]);
}
i=0;
k=0;
j=0;
while(i<m && j<n)
{
  if(a[i]<b[j])
  {
    c[k]=a[i];
    k++;
    i++;
  }
  else
  {
    c[k]=b[j];
    k++;
    j++;
  }
}
while(i<m)
{
 c[k]=a[i];
 i++;
 k++;
}
while(j<n)
{
 c[k]=b[j];
 k++;
 j++;
}
printf("\n Merged array=");
for(i=0;i<m+n;i++)
{
printf("%d\t",c[i]); 
}
}
