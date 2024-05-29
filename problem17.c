#include<stdio.h>
#include<string.h>
int main()
{
	char input[20];
	char data[5],j=0;

	printf("enter your string:");

	scanf("%s",input);

	for(int i=0;input[i]!='\0';i++){
		if(!(input[i]>='0' && input[i]<='9')){
			input[j++]=input[i];
			
		}
	}
	input[j]='\0';
	printf("%s",input);
	return 0;
}

