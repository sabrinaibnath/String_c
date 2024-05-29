#include<stdio.h>
int main()
{
	char name1[20];
	char name2[10];
	printf("please enter your name:");
	scanf("%s",name2);

	for(int i=0;name2[i]!='\0';i++){
		name1[i]=name2[i];
	}
	printf("%s",name1);
	return 0;
}
