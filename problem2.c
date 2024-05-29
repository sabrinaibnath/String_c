#include<stdio.h>
int main()
{
	char input[50];
	int length=0;
	printf("enter your string:");
	scanf("%s",input);

	for(int i=0;input[i]!='\0';i++){
		length++;
	}

	printf("length of the string:%d",length);

	return 0;
}

