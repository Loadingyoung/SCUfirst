#include <stdio.h>
int main() {
	int T,N,Q,i,j,k,num;
	scanf("%d",&T);
	for (i=0;i<T;i++) {
		scanf("%d%d",&N,&Q);
		int l[N],r[N];
		for (j=0;j<N;j++) {
			scanf("%d%d",&l[j],&r[j]);
		}
		for (j=0;j<Q;j++) {
			scanf("%d",&num);
			for (k=0;k<N;k++) {
				if (num>=l[k] && num<=r[k]) {
					printf("Yes\n");
					break;
				}
			}
			if (num<l[0] || num>r[N-1]) {
				printf("No\n");
			}
			else {
				for (k=0;k<N-1;k++) {
					if (num>r[k] && num<l[k+1]) {
						printf("No\n");
						break;
					}
				}
			}
		}
	}
	return 0;
} 
