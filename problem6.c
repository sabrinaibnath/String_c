#include<stdio.h>
int main()
{
	char input1[50],input2[50];

	printf("enter your first string:");

	fgets(input1,sizeof input1,stdin);


	printf("enter your second string:");

	fgets(input2,sizeof input2,stdin);

	int flag=0,length1=0,length2=0;


	for(int i=0;input1[i]!='\0';i++){
		length1++;
	}

	for(int k=0;input2[k]!='\0';k++){
		length2++;
	}
	length1=length1-1;
	length2=length2-1;
	//printf("%d %d",length1,length2);

	if(length1!=length2){
		flag=0;
	}
	else if(length1==length2){
		for(int j=0;j<length1;j++){
			if(input1[j]==input2[j]){
				flag++;
			}
			else{
				flag=0;
				break;
			}
		}
	}

	if(length1==flag){
		printf("strings are equal");
	}
	else if(flag==0){
		printf("strings are not equal");
	}
	return 0;
}

