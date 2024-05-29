#include<stdio.h>
int main()
{
	char name[20];
	int i;
	printf("enter your name");
	for(i=0;i<20;i++){
		scanf("%c",&name[i]);
	}

	for(i=0;i<20;i++){
		printf("%c\n",name[i]);
	}
	return 0;
}

