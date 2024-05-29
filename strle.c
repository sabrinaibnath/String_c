#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	int i;
	for(i=0;i<20;i++){
		scanf("%c",&name[i]);
	}

	int length;
	length=strlen(name);
	printf("%d",length);
	return 0;
}

