#include<stdio.h>
int main()
{
int r[20];
printf("enter the number");
scanf("%d",&r);
while(r%10!=0)
r++;
printf("%d",r);
}
