#include <stdio.h>
int main() {
	int n,sum=0,i=1;
	scanf("%d",&n);
	for (i=1;i<=n;i+=1) {
		sum=sum+i;
	}
	printf("%d\n",sum);
	while (i<=n) {
		sum=sum+i;
		i+=1;
	}
	printf("%d\n",sum);
	sum=0;i=1;
	do {
		sum=sum+i;
		i+=1;
	}while (i<=n);
	printf("%d\n",sum);
	return 0;
}
