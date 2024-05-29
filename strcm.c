#include<stdio.h>
#include<string.h>
int main()
{
	char name1[20];
	char name2[10];

	printf("enter your first string:");
	scanf("%s",name1);

	printf("enter your second name");
	scanf("%s",name2);

	int n=strcmp(name1,name2);

	if(n==0){
		printf("they are equal");
	}
	else{
		printf("they are not");
	}
	return 0;
}
