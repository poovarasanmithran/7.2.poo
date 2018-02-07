#include<stdio.h>
main()
{
int a[20],b[40],temp;
printf("enter two values");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("after swapping is %d%d\n",a,b);
}
