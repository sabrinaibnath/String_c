#include<stdio.h>
int main()
{
	char input1[50],input2[50];

	printf("enter the string one:");
	fgets(input1,sizeof input1,stdin);

	printf("enter the string two:");
	fgets(input2,sizeof input2,stdin);

	int length=0,i=0,j;
	while(input1[i]!='\0'){
		length++;
		i++;
	}
	input1[length-1]=' ';
	input1[length]='\0';

	for(j=0;input2[j]!='\0';j++){
		input1[length+j]=input2[j];
	}
        input1[length+j]='\0';

	printf("%s",input1);

	return 0;
}

