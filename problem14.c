#include<stdio.h>
#include<string.h>
int main()
{
	char input[50];
	printf("enter your string:");
	fgets(input,sizeof input,stdin);

	char key[20];
	printf("enter the string you are searching:");
	scanf("%s",key);

	int flag,length1=strlen(input),length2=strlen(key);

	for(int i=0;i<length1-length2;i++){
		for(int j=0;j<i-length2;j++){
			flag=1;
			if(input[j]!=key[i-j]){
				flag=0;
				break;
			}
		}
		if(flag==1){
			break;
		}
	}

	if(flag==1){
		printf("found");
	}
	else{
		printf("not found");
	}
	return 0;
}
