#include<stdio.h>
int main()
{
	char name1[20];

	printf("enter your string:");
	scanf("%s",name1);

	int i=0,length=0;
	while(name1[i]!='\0'){
		length++;
		i++;
	}
	for(i=length;i>=0;i--){
		printf("%c",name1[i]);
	}
	return 0;
}
