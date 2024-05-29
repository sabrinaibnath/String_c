#include<stdio.h>
int main()
{
	char input[50];
	printf("enter your string:");
	scanf("%s",input);

	for(int i=0;input[i]!='\0';i++){
		printf("%c\t",input[i]);
	}

	return 0;
}
