#include<stdio.h>
int main()
{
	char input[50];

	printf("enter your string:");

	fgets(input,sizeof input,stdin);


	int word=0;
	for(int i=0;input[i]!='\0';i++){
		if(input[i]==' '|| input[i]=='\n' || input[i]=='\t'){
			word++;
		}
	}

	printf("%d",word);
	return 0;
}
