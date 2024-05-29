#include<stdio.h>
int camp(char *p1,char *p2){
	int i=0;
	while(p1[i]!='\0'||p2[i]!='\0'){
		if(p1[i]==p2[i]){
			i++;
		}
		else if(p1[i]>p2[i]){
			return 1;
		}
		else if(p1[i]<p2[i]){
			return -1;
		}
	}
	return 0;
}



int main(){
	char name1[20];
	char name2[20];

	printf("enter first string:");
	scanf("%s",name1);

	printf("enter second string:");
	scanf("%s",name2);

	int v=camp(name1,name2);
	if(v==0){
		printf("they are equal");
	}
else if(v==-1||v==1){
	printf("they are not equal");
}
}


	


