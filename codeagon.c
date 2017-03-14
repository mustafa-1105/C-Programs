#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mismatch;
int main() {

	int test,i,k;
	char p[1500],q[1500],z[1500];
	scanf("%d",&test);
	for(k = 0; k < test; k++){
		scanf("%d",&mismatch);
	int temp = 0;
	gets(z);
	temp = strlen(z);
	for(i=1;i<temp/2;i++){
		p[i-1]=z[i];
	}
	int j= 0;
	for(i=(temp/2)+1;i<=temp;i++){
		q[j]=z[i];
		j++;
	}
	int m,n,l=0;
	int count=0;
	while(l<temp/2){
		for(n=0;n<temp/2;n++){
			count = 0;
			for(m=0;m<mismatch+n;m++){
				if(m<temp/2){
					if(p[m]!=q[m])
						count++;
				}
			}
			if(count == mismatch)
				printf("%d\n",mismatch+m);
		}
		l++;
	}

	}
	return 0;
}

