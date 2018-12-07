#include <stdio.h>
int main() {
	int n,i,m;
	scanf("%d",&n);
	if (n%2==0) {
		for (i=0;i<n/2;i++) {
			printf("%d",2*i+1);
			if (i!=n/2-1) {
				printf(" ");
			}
		}
	}
	else {
		for (i=0;i<=n/2;i++) {
			printf("%d",2*i+1);
			if (i!=n/2) {
				printf(" ");
			}
		}
	}
	return 0;
}
