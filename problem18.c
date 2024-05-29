#include<stdio.h>
int main()
{
	char input[20],c;
	printf("enter the string:");

	fgets(input,sizeof input,stdin);

	printf("enter the character:");
	scanf("%c", &c);

	int count=0;

	for(int i=0;input[i]!='\0';i++){
		if(input[i]==c){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
