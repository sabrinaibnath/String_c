#include<stdio.h>
#include<string.h>
int main()
{
	char input[25][50],temp[50];


	int n,i,j;
	printf("number of string:");
	scanf("%d",&n);
	getchar();


	for(int i=0;i<n;i++){
		fgets(input[i],sizeof(input[i]),stdin);
	}

	for(int i=1;i<=n;i++){
		for(int j=0;j<=n-i;j++){
			if(strcmp(input[j],input[j+1])>0){
					strcpy(temp,input[j]);
					strcpy(input[j],input[j+1]);
					strcpy(input[j+1],temp);
			}
		}
	}
	for(int i=0;i<=n;i++){
		printf("%s\n",input[i]);
	}
	
	return 0;
}
