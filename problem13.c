#include<stdio.h>
int main()
{
	char input[50];

	printf("enter your string:");

	fgets(input,sizeof input,stdin);

	int position,count=0;
	printf("enter the position:");
	scanf("%d",&position);

	for(int i=position-1;input[i]!='\0';i++){
		if(input[i]==' '|| input[i]=='\n'|| input[i]=='\t'){
			break;
		}
		else{
			count++;
			printf("%c",input[i]);
		}
	}
	printf("\n%d",count);

	return 0;
}

