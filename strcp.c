#include<stdio.h>
#include<string.h>
int main()
{
	char name1[20]

	char name2[10];

	printf("enter your first string:");
	scanf("%s",name1);

	printf("enter your second string:");
	scanf("%s",name2);

	strcpy(name1,name2);

	printf("name is=%s",name1);


	return 0;
}
