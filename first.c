#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int i,count,n, strength;
	int rocks[7]; 				  // THIS GIVES CORRECT OUTPUT FOR MY SYSTEM BUT NOT ON WEBSITE.
//	int rocks[500];				 /*  THIS TWO LINES DONT GIVE CORRECT OUTPUT IN MY SYSTEM ALSO. 
//	int *rocks = malloc(sizeof(int));									*/
	int skip = 0;
	scanf("%d %d",&n,&strength);
	for(i=0;i<n;i++){
		scanf("%d",&rocks[i]);
	}
	i=0;
	while(skip<=1){
		if(strength>=rocks[i]){
			count++;
		}else{
			skip++;
		}
		i++;
	}
	printf("%d \n",count);
	return 0;
}
