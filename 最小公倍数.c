#include <stdio.h>
int main() {
	int m,n,x,y,z,h,i,j;
	scanf("%d",&j);
	for (i=0;i<j;i++) {
		scanf("%d%d",&x,&y);
		m=x;
		n=y;
		while(x*y>0) {
			if (x<y) {
				h=x;
				x=y;
				y=h;
			}
			z=x%y;
			x=y;
			y=z;
		}
		printf("%d\n",m*n/x);
	}
	return 0;
}
