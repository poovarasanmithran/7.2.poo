#include<stdio.h>
void main()
{
int arr[1000],max,size,c,location=1;
printf("\n enter the elements in a array\n");
scanf("%d",&size);
printf("\n enter the %d integers\n",size);
for(c=0;c<=size;c++)
{
scanf("%d",&array[c]);
}
max=arr[0];
for(c=1;c<=size;c++)
{
if (arr[c]<max)
{
max=arr[c];
location=1;
}
}
printf("\n element present in the location is %d",location,max);
getch();
}
