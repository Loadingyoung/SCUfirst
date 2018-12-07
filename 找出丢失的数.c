#include <stdio.h>
int main() {
	int m,i;
	scanf("%d",&m);
	for (i=0;i<m;i+=1) {
		int n[1000],x,y=0,sum1=0,sum2=0,lost;
		for (x=0;x<1000;x+=1) {
			scanf("%d",&n[x]);
			y+=1;
			if (n[x]==0) {
				break;
			}
		}
		for (x=1;x<=y;x+=1) {
			sum1=sum1+x;
		}
		for (x=0;x<y;x+=1) {
			sum2=sum2+n[x];
		}
		lost=sum1-sum2;
		printf("%d\n",lost);
	}
	return 0;
}
