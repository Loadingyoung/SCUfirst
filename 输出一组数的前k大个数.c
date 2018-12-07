#include <stdio.h>
int main() {
	int n,k,i,j,m;
	scanf("%d%d",&n,&k);
	int num[n];
	for (i=0;i<n;i+=1) {
		scanf("%d",&num[i]);
	}
	for (i=0;i<n;i++) {
		for (j=i+1;j<n;j++) {
			if (num[i]<num[j]) {
				m=num[i];
				num[i]=num[j];
				num[j]=m;
			}
		}
	}
	for (i=0;i<k;i++) {
		printf("%d",num[i]);
		if (i<k-1) {
			printf(" ");
		}
	}	
	return 0;
}	
