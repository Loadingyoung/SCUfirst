#include <stdio.h>
int main() {
	int x,y,a,b,n,i,c;
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		scanf("%d %d",&x,&y);
		c=y/2;
		a=2*x-c;
		b=c-x;
		if (a<=0 || b<=0 || c*2!=y) {
			printf("error\n");
		}
		else {
			printf("%d %d\n",a,b);
		}
	}
	return 0;
} 
