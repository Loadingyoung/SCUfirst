#include <stdio.h>
int main() {
	int v,d;
	scanf("%d%d",&v,&d);
	while (v*d>0) {
		int t1=1,t2=0;
		while(v/d>=t1) {
			v=v-d*t1;
			t1++;	
		}
		if (v!=0&&v%d!=0) {
			t2=t1-1;
			t1=t1*(t1-1)/2+v/d+1;
		}
		else if (v!=0&&v%d==0){
			t2=t1-1;
			t1=t1*(t1-1)/2+v/d;
		}
		else {
			t2=t1-2;
			t1=t1*(t1-1)/2;
		}
		printf("%d\n",t1+t2);
		scanf("%d%d",&v,&d);
	}
	return 0;
}
