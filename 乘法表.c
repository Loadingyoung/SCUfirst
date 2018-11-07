#include<stdio.h>
int main() {
	int m,n;
	for (n=1;n<=9;n++) {
		for (m=1;m<=n;m++) {
				printf("%d*%d=%d",n,m,m*n);
				if(m!=n) {
					printf(" ");
				}
		}
		printf("\n");	
	}
	return 0;
}
