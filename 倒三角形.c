#include <stdio.h>
int main() {
	int n,i,m,x,y;
	scanf("%d",&m);
	for (i=0;i<m;i+=1) {
		scanf("%d",&n);
		for (x=n;x>0;x-=1) {
			for (y=0;y<(n-x);y+=1) {
				printf(" "); 
			}
			for (y=0;y<(2*x-1);y+=1) {
				printf("*");
			}
			printf("\n");	
		}	
	}
	return 0;
} 
