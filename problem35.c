#include<stdio.h>
#include<string.h>
int main()
{
	char input[50];
	printf("enter your string:");
	fgets(input,sizeof input,stdin);

	int count=0,length=strlen(input);

	for(int i=0;i<length-1;i++){
		//for(int j=i+1;j<length;j++){
			if(input[i]!=input[i+1]){
				count++;
			}
		//}
		
	}
	printf("%d",count);

	
		return 0;
}
