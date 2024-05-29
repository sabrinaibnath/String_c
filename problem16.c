#include<stdio.h>
#include<string.h>
int main()
{
	char input[50];
	int t,h,e,sp,count=0;
	printf("enter the string:");

	fgets(input,sizeof input,stdin);

	int length=strlen(input);
	length--;

	for(int i=0;i<=length-3;i++){
		t=(input[i]=='t'||input[i]=='T');
	        h=(input[i+1]=='h'||input[i+1]=='H');
        	e=(input[i+2]=='e'||input[i+2]=='E');
        	sp=(input[i+3]==' '||input[i+3]=='\n');

              if((t&& h && e &&sp)==1)
		      count++;
	}

	printf("%d",count);

	return 0;
}


