#include<stdio.h>

int main(){

	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		j=0;
		while(j<n-i){
			printf(" ");
			j++;
		}
		for(k=0;k<i;k++){
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
