#include<stdio.h>
void main()
{
int a[10],b[20],diff;
printf("\n enter the two numbers");
scanf("%d%d",&a,&b);
diff=a-b;
if(diff%2==0)
{
printf("\n %d is even number");
}
else
{
printf("\n %d is odd number");
}
}
