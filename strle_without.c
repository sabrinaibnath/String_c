#include<stdio.h>
int main()
{
	char name[20];
	int i,length=0;

	printf("please enter your name:");
	scanf("%s",name);

	for(i=0;name[i]!='\0';i++){
		length++;
	
	}
	printf("length=%d",length);
	return 0;
}
