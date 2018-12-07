#include <stdio.h>
int main() {
	int T,N,i,j,k;
	scanf("%d",&T);
	for (i=0;i<T;i++) {
		scanf("%d",&N);
		int a[N],sum=0;
		for (j=0;j<N;j++) {
			scanf("%d",&a[j]);
		}
		for (j=0;j<N;j++) {
			for (k=j+1;k<N;k++) {
				sum=sum+a[j]*a[k];
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
