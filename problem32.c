#include<stdio.h>
#include<string.h>
int main()
{
	char input[20];
	printf("enter your string:");
	fgets(input,sizeof input,stdin);
	

	int length=strlen(input);
	int data[256]={0};


	for(int i=0;i<length;i++){
			if(input[i]!='\n'&& input[i]!='\0'){
				data[(int)input[i]]++;
			}
		}
	for(int i=0;i<256;i++){
		if(data[i]>0){
			printf("%c\t %d\n",(char)i,data[i]);
		}

	}
	return 0;
	
}
