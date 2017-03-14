#include<stdio.h>
int main()
{
	int i,length = 0,count = 0;
	char* S = (char*)malloc(10240 * sizeof(char));
	scanf("%s",S);
	for(i = 0;S[i]!='\0';i+=3){
		if(S[i] != 'S'){ 
			count++;
		}
		if(S[1+i] != 'O'){
			count++;
		}
		if(S[2+i] != 'S'){
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
