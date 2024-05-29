#include<stdio.h>
#include<ctype.h>
int main()
{
	char input[30];
	printf("enter the string:");
	fgets(input,sizeof input,stdin);

	char c;

	for(int i=0;input[i]!='\0';i++){
		c=input[i];
		if(c>='a' && c<='z'){
			input[i]=toupper(c);
		}
		else{
			input[i]=tolower(c);
		}
	}

	printf("%s",input);
	return 0;
}

