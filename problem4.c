#include<stdio.h>
int main()
{
	char input[20];
	int length=0;
	printf("enter your string:");
	scanf("%s",input);


	for(int i=0;input[i]!='\0';i++){
		length++;
	}

	for(int j=length;j>=0;j--){
		printf("%c\t",input[j]);
	}

	return 0;
}

