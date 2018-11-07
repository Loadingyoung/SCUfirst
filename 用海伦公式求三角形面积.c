#include <stdio.h>
#include <math.h>
int main() {
	int T,i;
	scanf("%d",&T);
	float p,area; 
	int sidea,sideb,sidec,m,n;
	
	for (i=0;i<T;i++) {
		scanf("%d%d%d",&sidea,&sideb,&sidec);
		m=sidea+sideb;
		n=sidea-sideb;
		if(m>sidec&&fabs(n)<sidec) {
			p=(sidea+sideb+sidec)/2.0;
			area=sqrt(p*(p-sidea)*(p-sideb)*(p-sidec));
			printf("%.2f\n",area);
		}
		else {
			printf("error\n");
		}	
	}
	return 0;
}
