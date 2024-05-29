#include<stdio.h>
int main()
{
	char name1[20];
	char name2[10];

	printf("enter your first name:");
	scanf("%s",name1);

	printf("enter your second string:");
	scanf("%s",name2);

	int length=0,i=0,j=0;
	while(name1[i]!='\0'){
		i++;
		length++;
		
	}
	while(name2[j]!='\0'){
		name1[length+j]=name2[j];
		j++;
	}
	printf("%s",name1);
	return 0;
}

