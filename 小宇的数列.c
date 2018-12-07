#include <stdio.h>
int main() {
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	while (a!=0||b!=0||c!=0||d!=0||e!=0) {
		int m=0,n=0;
		m=b-a;
		if (a!=0&&b!=0&&c!=0&&d!=0&&e!=0) {
			n=b/a;
			if (c-b==m&&d-c==m&&e-d==m) {
				printf("case one\n");
				printf("%d %d %d %d %d\n",e+m,e+2*m,e+3*m,e+4*m,e+5*m);
				if (a+b==c&&b+c==d&&c+d==e) {
					printf("case three\n");
					printf("%d %d %d %d %d\n",d+e,d+2*e,2*d+3*e,3*d+5*e,5*d+8*e);
				}
				if (c/b==n&&d/c==n&&e/d==n) {
					printf("case two\n");
					printf("%d %d %d %d %d\n",e*n,e*n*n,e*n*n*n,e*n*n*n*n,e*n*n*n*n*n);
				}
			} 
			if ((c-b!=m||d-c!=m||e-d!=m)&&(c/b==n&&d/c==n&&e/d==n)) {
				printf("case two\n");
				printf("%d %d %d %d %d\n",e*n,e*n*n,e*n*n*n,e*n*n*n*n,e*n*n*n*n*n);
			}
			if ((c-b!=m||d-c!=m||e-d!=m)&&(a+b==c&&b+c==d&&c+d==e)) {
				printf("case three\n");
				printf("%d %d %d %d %d\n",d+e,d+2*e,2*d+3*e,3*d+5*e,5*d+8*e);
			}
		}
		else {
			if (c-b==m&&d-c==m&&e-d==m) {
				printf("case one\n");
				printf("%d %d %d %d %d\n",e+m,e+2*m,e+3*m,e+4*m,e+5*m);
				if (a+b==c&&b+c==d&&c+d==e) {
					printf("case three\n");
					printf("%d %d %d %d %d\n",d+e,d+2*e,2*d+3*e,3*d+5*e,5*d+8*e);
				}
			}
			if ((c-b!=m||d-c!=m||e-d!=m)&&(a+b==c&&b+c==d&&c+d==e)) {
				printf("case three\n");
				printf("%d %d %d %d %d\n",d+e,d+2*e,2*d+3*e,3*d+5*e,5*d+8*e);
			} 
		}
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	}
	return 0;
}
