#include<stdio.h>
#include<string.h>
int main()
{
	char name1[20];
	char name2[20];
	char temp[20];

	printf("enter your first string");
	scanf("%s",name1);

	printf("enter your second string");
	scanf("%s",name2);

	strcpy(temp,name1);
	strcpy(name1,name2);
	strcpy(name2,temp);

	printf("the first string after swapping is:%s\n",name1);
	printf("the second string after swapping is:%s\n",name2);

	return 0;
}



