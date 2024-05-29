#include<stdio.h>
int main()
{
	char input[50];
	int freq[255],ascii,max=0,j=0,i;


	printf("enter your string:");

	fgets(input,sizeof input,stdin);

	for(i=0;i<255;i++){
		freq[i]=0;
	}

	while(input[j]!='\0'){
		ascii=(int)input[j];
		freq[ascii]++;
		j++;
	}

	for(i=0;i<255;i++){
		if(i!=32){
			if(freq[i]>=max){
				max=freq[i];
			}
		}
	}
	printf("%c appears in %d times",freq[i],max);


	return 0;
}
