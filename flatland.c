#include<stdio.h>

int main()
{

	int i,j,k,n,m,temp = 0;
	int* dist = (int*)malloc(sizeof(int));
//	int* c = (int*)malloc(sizeof(int) *  m);
	int c[100];
	scanf("%d %d",&n,&m);
	printf("%d %d\n",n,m);
	for(i = 0; i < m; i++){
		scanf("%d ",&c[i]);
		printf("%d\n",c[i]);
	}/*
	for(i = 0; i < m; i++){
		j=0;
		k=0;
		while(j<n){
			if(temp > (c[i] - j)){
				dist[k] = (c[i] - j);
				k++;
			}
			j++;
		}
	}
	temp = 0;
	for(i = 0; i < k; i++){
		if(temp < dist[i]){
			temp = dist[i];
		}
	}
	printf("%d\n",temp);*/
	return 0;
}
