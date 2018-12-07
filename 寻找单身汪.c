#include <stdio.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	int num[n],x;
	for (i=0;i<n;i++) {
		scanf("%d",&num[i]);
	}
	if (n==1) {
		printf("%d\n",num[0]);
	}
	if (n>=2) {
		for (i=0;i<n;i++) {
			for (j=i+1;j<n;j++) {
				if (num[j]<num[i]) {
					x=num[i];
					num[i]=num[j];
					num[j]=x;
				}
			}
		}
		if (num[0]!=num[1]) {
			printf("%d\n",num[0]);
		} 
		else if (num[n-1]!=num[n-2]){
			printf("%d\n",num[n-1]);
		}
		else {
			for (i=1;i<n-1;i++) {
				if (num[i]!=num[i-1] && num[i]!=num[i+1]) {
					printf("%d\n",num[i]);
				}
			}
		}
	} 
	return 0;
} 
