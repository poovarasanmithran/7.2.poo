#include<stdio.h>
#include<string.h>
int main()
{
char a[100]="hello world.123";
int i,c=0;
for(i=0;a[i]!='\0';i++)
{
	if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'||a[i]=='*'||a[i]=='@'||a[i]=='&')
	{
		c++;
	}
}
if(a[i]<=0)
{
printf("YES");
}
return 0;
}
