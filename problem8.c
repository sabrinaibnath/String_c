#include<stdio.h>
int main()
{
	char input1[50],input2[50];
	int length=0;

	printf("enter the string:");

	fgets(input1,sizeof input1,stdin);

	for(int i=0;input1[i]!='\0';i++){
		length++;
		input2[i]=input1[i];
	}
	input2[length]='\0';

	printf("this is the First string:%s\n",input1);
        printf("this is the second string:%s\n",input2);
        printf("number of character copied:%d\n",length);
	

	return 0;
}







