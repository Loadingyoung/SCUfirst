#include <stdio.h>
int main() {
	int m,n,x=0,y,z,i,num;
	scanf("%d",&num);
	for (i=0;i<num;i++) {
		scanf("%d%d",&m,&n);
		while (1) {
			y=n-m-2*x;
			z=x+2*m-n;
			if (y*z<0) {
				break;
			}
			printf("%d %d %d\n",x,y,z);
			x+=1;
		}
	}
	
	return 0;
} 
