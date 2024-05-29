#include<stdio.h>
#include<string.h>
int main()
{
	char input[50],c;

	printf("enter your string:");

	fgets(input,sizeof input,stdin);

	int length=strlen(input);

	for(int i=1;i<length;i++){
		for(int j=0;j<length-i;j++){
			if(input[j]>input[j+1]){
				c=input[j];
				input[j]=input[j+1];
				input[j+1]=c;
			}
		}
	}

	printf("%s",input);
	return 0;
}


	

