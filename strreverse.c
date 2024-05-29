#include<stdio.h>
#include<string.h>
int main()
{
	char name[10];
	printf("enter your name");
	scanf("%s",name);

	strrev(name);
	printf("the string is:%s",name);
	return 0;
}
