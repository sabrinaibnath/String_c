#include<stdio.h>
int main()
{
	char input[50];

	printf("enter your string:");

	fgets(input,sizeof input,stdin);

	int alp=0,digit=0,spch=0;

	for(int i=0;input[i]!='\0';i++){
		if((input[i]>='a' && input[i]<='z')||(input[i]>='A' && input[i]<='Z')){
			alp++;
		}
		else if(input[i]>='0' && input[i]<='9'){
			digit++;
		}
		else{
			spch++;
		}
	}

	printf("number of alphabets are:%d\n",alp);
	printf("number of digits are:%d\n",digit);
	printf("number of special character are:%d\n",spch);
	

	return 0;
}

