#include <stdio.h>
int main() {
	int n,num,i,j;
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		scanf("%d",&num);
		long long a[num][num];
		for (i=0;i<num;i++) {
			a[i][0]=a[i][i]=1;
		}
		for (i=2;i<num;i++) {
			for (j=1;j<i;j++) {
				a[i][j]=a[i-1][j-1]+a[i-1][j];	
			}
		}
		for (i=0;i<num;i++) {
			for (j=0;j<=i;j++) {
				printf("%d",a[i][j]);
				if (j!=i) {
					printf(" ");
				} 
			}
			printf("\n");
		}
	}
	return 0;
}
