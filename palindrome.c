#include<stdio.h>
#include<string.h>
int camp(char *p1,char *p2){
	int i=0;
	while(p1[i]!='\0'||p2[i]!='\0'){
		if(p1[i]==p2[i]){
			i++;
		}
		else if(p1[i]>p2[i] || p1[i]<p2[i]){
			return -1;
		}
	}
	return 0;
}

int main()
{
	char name1[20];
	char name2[20];
	int i,j;

	printf("enter your string:");
	scanf("%s",name1);

	int l=strlen(name1);
	for(i=l-1,j=0;i>=0;i--,j++){
		name2[j]=name1[i];
	}
	name2[j]='\0';

	int v=camp(name1,name2);
	if(v==0){
	   printf("it's palindrome");
			}
			
	else if(v==-1){
			printf("it's not a palindrom");
			}
	return 0;
}

